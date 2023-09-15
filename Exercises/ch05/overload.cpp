#include <iostream>
#include <cmath>
using namespace std;

double thing(double a){
    double ans = a * 3;
    return ans;
}

int thing(int a, int b){
   int c= a + b;
    return c;
}

int thing(int a, int b, int c){
   int d= a + b + c;
    return d;
}

double thing(double a, double b){
   double c= a +b;
    return c;
}

double thing(double a, double b, double c){
   double d= a+b+c;
    return d;
}

int main(){

double v = thing(4.0);
cout << 4.0 << " tripled is " << v << endl;

double s=thing(4,9);
cout << "The sum is " << s << endl;

int su=thing(2,3,4);
cout << "The sum is "<< su << endl;

double sum=thing(4.8,9.2);
cout << "The sum is " << sum << endl;

double summ=thing(4.8,9.2,2.7);
cout << "The sum is " << summ << endl;

return 0;
}