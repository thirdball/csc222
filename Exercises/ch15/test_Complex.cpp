#include "Complex.cpp"

int main() {
    Complex c1(8, 9);
    Complex c2(5, 4);
    c1 = c1 - c2;
    cout << c1.to_string() << endl;

    Complex c3(-8, 6);
    Complex c3Abso = c3.Abso();
    Complex c4(4, 2);
    c3 = c3 / c4;
    cout << c3.to_string() << endl;
    cout << c3Abso.to_string() << endl;
}
