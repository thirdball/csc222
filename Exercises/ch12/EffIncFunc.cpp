#include <iostream>
using namespace std;

struct Time {
    int hour, minute;
    int second;
    
    void adjust_time(double sec);
    };

    void Time::adjust_time(double sec) {
        
        second += sec;
        
        if (second >= 60) {
            minute += second / 60;
            second %= 60;
        }
        if (minute >= 60) {
            hour += minute / 60;
            minute %= 60;
        }
    }


int main() {

    Time current_time = {3, 0, 30};
    current_time.adjust_time(300);

    cout << "Current time: " << current_time.hour << " hours, " << current_time.minute 
    << " minutes, " << current_time.second << " seconds." << endl;

    return 0;
}
