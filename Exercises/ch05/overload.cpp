#include <iostream>
#include <cmath>
using namespace std;

double overloaded_function(double a){
    double ans = a * 3;
    return ans;
}

int overloaded_function(int a, int b){
   int c= a + b;
    return c;
}

int overloaded_function(int a, int b, int c){
   int d= a + b + c;
    return d;
}

double overloaded_function(double a, double b){
   double c= a +b;
    return c;
}

double overloaded_function(double a, double b, double c){
   double d= a+b+c;
    return d;
}

int main(){

double v = overloaded_function(4.0);
cout << 4.0 << " tripled is " << v << endl;

double s=overloaded_function(4,9);
cout << "The sum is " << s << endl;

int su=overloaded_function(2,3,4);
cout << "The sum is "<< su << endl;

double sum=overloaded_function(4.8,9.2);
cout << "The sum is " << sum << endl;

double summ=overloaded_function(4.8,9.2,2.7);
cout << "The sum is " << summ << endl;

return 0;
}