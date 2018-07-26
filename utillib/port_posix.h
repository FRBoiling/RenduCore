//
// Created by boil on 18-7-24.
//

#ifndef PORT_POSIX_H
#define PORT_POSIX_H

#include <endian.h>
#include <cstdint>
#include <string>
#include <netinet/in.h>

namespace PortPosix {
    static const int kLittleEndian = LITTLE_ENDIAN; //小字节序

    inline uint16_t htobe(uint16_t v) {
        if (!kLittleEndian) {
            return v;
        }
        unsigned char *pv = (unsigned char *) &v;
        return uint16_t(pv[0]) << 8 | uint16_t(pv[1]);
    }

    inline uint32_t htobe(uint32_t v) {
        if (!kLittleEndian) {
            return v;
        }
        unsigned char *pv = (unsigned char *) &v;
        return uint32_t(pv[0]) << 24 | uint32_t(pv[1]) << 16 | uint32_t(pv[2]) << 8 | uint32_t(pv[3]);
    }

    inline uint64_t htobe(uint64_t v) {
        if (!kLittleEndian) {
            return v;
        }
        unsigned char *pv = (unsigned char *) &v;
        return uint64_t(pv[0]) << 56 | uint64_t(pv[1]) << 48 | uint64_t(pv[2]) << 40 | uint64_t(pv[3]) << 32
               | uint64_t(pv[4]) << 24 | uint64_t(pv[5]) << 16 | uint64_t(pv[6]) << 8 | uint64_t(pv[7]);
    }

    inline int16_t htobe(int16_t v) { return (int16_t) htobe((uint16_t) v); }

    inline int32_t htobe(int32_t v) { return (int32_t) htobe((uint32_t) v); }

    inline int64_t htobe(int64_t v) { return (int64_t) htobe((uint64_t) v); }

    in_addr getHostByName(const std::string &host);

    uint64_t gettid();
};

#endif //PORT_POSIX_H
