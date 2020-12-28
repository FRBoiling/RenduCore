#ifndef RESOLVER_H
#define RESOLVER_H

#include "Optional.h"
#include <boost/asio/ip/tcp.hpp>
#include <string>

namespace Rendu
{
    namespace Net
    {
        inline Optional<boost::asio::ip::tcp::endpoint> Resolve(boost::asio::ip::tcp::resolver& resolver, boost::asio::ip::tcp const& protocol,
            std::string const& host, std::string const& service)
        {
            boost::system::error_code ec;
#if BOOST_VERSION >= 106600
            boost::asio::ip::resolver_base::flags flagsResolver = boost::asio::ip::resolver_base::all_matching;
            boost::asio::ip::tcp::resolver::results_type results = resolver.resolve(protocol, host, service, flagsResolver, ec);
            if (results.begin() == results.end() || ec)
                return {};

            return results.begin()->endpoint();
#else
            boost::asio::ip::resolver_query_base::flags flagsQuery = boost::asio::ip::tcp::resolver::query::all_matching;
            boost::asio::ip::tcp::resolver::query query(std::move(protocol), std::move(host), std::move(service), flagsQuery);
            boost::asio::ip::tcp::resolver::iterator itr = resolver.resolve(query, ec);
            boost::asio::ip::tcp::resolver::iterator end;
            if (itr == end || ec)
                return {};

            return itr->endpoint();
#endif
        }
    }
}

#endif // RESOLVER_H
