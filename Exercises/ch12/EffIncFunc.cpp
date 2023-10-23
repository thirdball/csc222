#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    double second;

    void adjust_time();
};

void Time::adjust_time() {
        int ExtraMin = static_cast<int>(second / 60);
        second -= ExtraMin * 60;
        minute += ExtraMin;
        
        int ExtraHours = minute / 60;
        minute %= 60;
        hour += ExtraHours;
    }

int main() {

Time current_time = {5, 30 , 100.0};
current_time.adjust_time();

cout << "The time is " << current_time.hour << " hours, " 
<< current_time.minute << " minutes, " << current_time.second 
<< " seconds." << endl;

    return 0;
}



