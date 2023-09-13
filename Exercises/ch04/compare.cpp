#include <iostream>
#include <cmath>
using namespace std;



void compare(int a, int b){
    if (a>b)
    {
        cout << "a is bigger than b" << endl;
    }
    if (a==b){
        cout << "a equals b" << endl;
    }
    if (a<b){
        cout << "a is less than b" << endl;
    }
    return;
}

int main()
{
    compare(3, 4);
    return 0;
}