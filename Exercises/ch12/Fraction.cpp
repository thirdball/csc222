#include <iostream>
#include "Fraction.h"
using namespace std;

void Fraction::print(){
    cout << numerator << "/" << denominator << endl;
}

Fraction::Fraction(){
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int n, int d){
    numerator = n;
    denominator = d;
}

void Fraction::add(int num){
    numerator += num * denominator;
}

void Fraction::minus(int num){
    numerator -= num*denominator;
}

void Fraction::times(int num){
    numerator *= num;
}

void Fraction::divided_by(int num){
    denominator *= num;
}