#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    double second;

    void adjust_time();
    Time(int h, int m, double s);
    Time(int h, int m, int s);
    void print_time();
};

    Time::Time(int h, int m, double s) {
        hour = h; minute = m; second = s;
        int ExtraMin = static_cast<int>(second / 60);
        second -= ExtraMin * 60;
        minute += ExtraMin;
        
        int ExtraHours = minute / 60;
        minute %= 60;
        hour += ExtraHours;
        cout << "used double seconds function" <<endl;
    }
Time::Time(int h, int m, int s)
{
  hour = h; minute = m; second = s;
    int ExtraMin = static_cast<int>(second / 60);
        second -= ExtraMin * 60;
        minute += ExtraMin;
        
        int ExtraHours = minute / 60;
        minute %= 60;
        hour += ExtraHours;
        cout << "used int seconds function" <<endl;
}

void Time::print_time()
{
    cout << hour << ":" << minute << ":" << second << endl;
}

int main() {

Time current_time(5, 30 , 70);
current_time.print_time();

    return 0;
}

//the result was the same with 3 int arguments

