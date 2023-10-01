#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;
};

void print_time(Time& t) {
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}

double convert_to_seconds(const Time& t)
{
    int minutes = t.hour * 60 + t.minute;
    double seconds = minutes * 60 + t.second;

    return seconds;
}

void make_time(Time& time, double secs)
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

Time make_time(double secs)
{
    Time time;
    time.hour = int(secs / 3600.0);
    secs -= time.hour * 3600.0;
    time.minute = int(secs / 60.0);
    secs -= time.minute * 60;
    time.second = secs;

    return time;
}


int main(){
    Time time = {11, 49, 300.14159};

print_time(time);
}