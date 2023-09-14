#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result=sqrt(dsquared);
    return result;
}

int main(){
    double result = distance(1,2,4,6);
    cout << "The distance is " << result << endl;
    return 0;
}