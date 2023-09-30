#include <iostream>
using namespace std;

struct Point{
    double x, y;
};

struct Rectangle {
    Point corner;
    double width, height;
};

void print_area(double p)
{
    cout << "The area is " << p << endl;
}

double area (Rectangle& box)
{
    double x = box.corner.x + box.width;
    double y = box.corner.y + box.height;
    double a = x * y;
    return a;
   
}


int main(){
Rectangle box = {{0.0, 0.0}, 100.0, 200.0};
double a = area(box);
print_area(a);
}