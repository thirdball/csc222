struct Fraction{
    int numerator, denominator;
    void add(int num);
    void minus(int num);
    void times(int num);
    void divided_by(int num);
    void print();

    Fraction();
    Fraction(int n, int d);
};