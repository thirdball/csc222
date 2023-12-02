#include <iostream>
#include <cmath>
using namespace std;

enum Flag {POLAR};

class Complex {
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex() {
        real = 0; imag = 0;
        polar = false;
    }

    Complex(double r, double i) {
        real = r; imag = i;
        polar = false;
    }

    Complex(double m, double t, Flag) {
        mag = m; theta = t;
        polar = true;
    }

    string to_string();

    void calculate_polar();
    void calculate_cartesian();

    Complex operator/(Complex& c);
    Complex Abs();
    Complex operator-(const Complex& c);
};

string Complex::to_string() {
    return std::to_string(real) + " + " + std::to_string(imag) + "i";
}

void Complex::calculate_polar() {
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
}

void Complex::calculate_cartesian() {
    real = mag * cos(theta);
    imag = mag * sin(theta);
    polar = false;
}

Complex Complex::operator-(const Complex& c) {
    return Complex(real - c.real, imag - c.imag);
}

Complex Complex::operator/(Complex& c) {
    if (polar == false) {
        this->calculate_polar();
    }
    if (c.polar == false) {
        c.calculate_polar();
    }

    Complex num(mag / c.mag, theta - c.theta, POLAR);
    num.calculate_cartesian();
    return num;
}
Complex Complex::Abs() {
    return Complex(abs(real), abs(imag));
}
int main() {
    Complex c1(8, 9);
    Complex c2(5, 4);
    c1 = c1 - c2;
    cout << c1.to_string() << endl;

    Complex c3(-8, 6);
    Complex c3Abs = c3.Abs();
    Complex c4(4, 2);
    c3 = c3 / c4;
    cout << c3.to_string() << endl;
    cout << c3Abs.to_string() << endl;
}