#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void increment(const Time& time, double secs)
{
    time.second += secs;

    while (time.second >= 60.0) {
        time.second -= 60.0;
        time.minute += 1;
    }
    while (time.minute >= 60) {
        time.minute -= 60;
        time.hour += 1;
    }
}
//compiler error shows up