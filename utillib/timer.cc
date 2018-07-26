//
// Created by boil on 18-7-24.
//
#include "timer.h"

#include <cstring>

Timer::Timer() {
    Now();
}

Timer::~Timer() {

}

Timer::Timer(Timer const& t) {
    memcpy(this, &t, sizeof(*this));
}

std::string Timer::GetDateStr() {
    char tmp[32];
    snprintf(tmp, 32,"%04d%02d%02d", (_tm.tm_year + 1900), _tm.tm_mon + 1, _tm.tm_mday);
    return tmp;
}

int Timer::GetDate() {
    char tmp[32];
    snprintf(tmp, 32,"%04d%02d%02d", (_tm.tm_year + 1900), _tm.tm_mon + 1, _tm.tm_mday);
    return atoi(tmp);
}

int Timer::GetYearDay() {
    return _tm.tm_yday;
}

int Timer::GetMonthDay() {
    return _tm.tm_mday;
}

int Timer::GetWeekDay() {
    return _tm.tm_wday;
}

int Timer::GetMonth() {
    return _tm.tm_mon;
}

int Timer::GetYear() {
    return _tm.tm_year + 1900;
}

int Timer::GetHour() {
    return _tm.tm_hour;
}

int Timer::GetMin() {
    return _tm.tm_min;
}

int Timer::GetSec() {
    return _tm.tm_sec;
}

int Timer::GetMsec() {
    return unixtime_;
}

std::string Timer::GetFormatTime() {
    char res[32] = { 0 };
    snprintf(res, 32,"%04d %02d %02d-%02d:%02d:%02d", (_tm.tm_year + 1900), _tm.tm_mon + 1, _tm.tm_mday, _tm.tm_hour, _tm.tm_min, _tm.tm_sec);
    return std::move(std::string(res));
}

bool Timer::GetFormatTime(char* res, int len) {
    if (len < 32) {
        return false;
    }
    snprintf(res, 32, "%04d %02d %02d-%02d:%02d:%02d", (_tm.tm_year + 1900), _tm.tm_mon + 1, _tm.tm_mday, _tm.tm_hour, _tm.tm_min, _tm.tm_sec);
    return true;
}

void Timer::Now() {
    unixtime_ = std::chrono::time_point_cast<std::chrono::milliseconds>(
            std::chrono::system_clock::now()).time_since_epoch().count();
    time_t it = unixtime_ / 1000;
    std::unique_lock<std::mutex> lock(_mutex);
    _tm = *std::gmtime(&it);
}

bool Timer::operator==(Timer const& t) {
    return unixtime_ == t.unixtime_;
}

bool Timer::operator>(Timer const& t) {
    return unixtime_ > t.unixtime_;
}

bool Timer::operator>=(Timer const& t) {
    return unixtime_ >= t.unixtime_;
}

bool Timer::operator<(Timer const& t) {
    return unixtime_ < t.unixtime_;
}

bool Timer::operator<=(Timer const& t) {
    return unixtime_ <= t.unixtime_;
}
