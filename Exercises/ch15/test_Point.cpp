#include <iostream>
#include "Point.cpp"

using namespace std;

int main() {
    Point point1(1, 4);
    cout << point1 << endl;
    Point point2(3, 6);
    cout << point2 << endl;

    point1 +=point2;
    point2 -= point1;
    return 0;
}