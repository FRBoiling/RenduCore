//
// Created by boil on 18-7-24.
//

#ifndef TIMER_H
#define TIMER_H

#include <string>
#include <mutex>

class Timer {
public:
    Timer();
    ~Timer();
    Timer(Timer const& t);

    void Now();
    std::string GetDateStr();
    int GetDate();
    int GetYearDay();
    int GetMonthDay();
    int GetWeekDay();
    int GetMonth();
    int GetYear();
    int GetHour();
    int GetMin();
    int GetSec();
    int GetMsec();

    //return xxxx xx xx-xx:xx:xx
    std::string GetFormatTime();
    //return xxxx xx xx-xx:xx:xx
    bool GetFormatTime(char* res, int len);

    bool operator==(Timer const& t);
    bool operator>(Timer const& t);
    bool operator>=(Timer const& t);
    bool operator<(Timer const& t);
    bool operator<=(Timer const& t);

private:
    /* time cache */
    time_t unixtime_;    /* Unix time sampled every cron cycle. */
    long long mstime_;   /* Like 'unixtime' but with milliseconds resolution. */

    std::tm     _tm;
    std::mutex  _mutex;
};


#endif //TIMER_H
