#include <iostream>
using namespace std;

struct Point{
    double x, y;
};

struct Rectangle {
    Point corner;
    double width, height;
};

void print_point(Point p)
{
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

Point lowerRight (Rectangle& box)
{
    double x = box.corner.x + box.width;
    double y = box.corner.y - box.height;
    Point result = {x, y};
    return result;
}


int main(){
Rectangle box = {{0.0, 0.0}, 100.0, 200.0};
Point LRcorner = lowerRight(box);
print_point(LRcorner);
}