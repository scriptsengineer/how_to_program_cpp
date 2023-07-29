#include <iostream>
using std::cout;

#include <iomanip>
using std::setfill;
using std::setw;

#include "time.h"

Time::Time() {
	hour = minute = second = 0;
}

void Time::set_time(int h, int m, int s) {
    hour = (h >= 0 && h < 24) ? h : 0;
    minute = (m >= 0 && m < 60 ) ? m : 0;
    second = (s >= 0 && s < 60 ) ? s : 0;
}

void Time::print_universal() {
    cout << setfill('0') << setw(2) << hour  << ":"
    << setw(2) << minute << ":" << setw(2) << second;
}

void Time::print_standard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
    << setfill('0') << setw(2) << minute << ":" << setw(2) <<
    second << (hour < 12 ? " AM" : " PM");
}