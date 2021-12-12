// concrete types' representation is part of its definition
#include <iostream>
using namespace std;

class complex {
    double re, im;  // representation: two doubles
public:
    complex(double r, double i) : re{ r }, im{ i } {}
    complex(double r) : re{ r }, im{ 0 } {}
    complex( ) : re{ 0 }, im{ 0 } {}

    double real( ) const {
        return re;
    }
    void real(double d) {
        re = d;
    }
    double imag( ) const {
        return im;
    }
    void imag(double d) {
        im = d;
    }

    complex &operator+=(complex z) {
        re += z.re, im += z.im;
        return *this;
    }
    complex &operator-=(complex z) {
        re -= z.re, im -= z.im;
        return *this;
    }
    // complex &operator*=(complex);
    // complex &operator/=(complex);

    complex &operator+(complex);
}

complex
operator+(complex a, complex b) {
    return a += b;
}
bool operator==(complex a, complex b) {
    return a.real( ) == b.real( ) && a.imag( ) == b.imag( );
}
bool operator!=(complex a, complex b) {
    return !(a == b);
}

void f(complex z) {
    complex a{ 2.3 };
    complex b{ a };
    complex c{ a + complex{ 1, 2.3 } };

    if (c != b)
        c = a + b;
}
int main( ) {
    complex test(1, 2.2);
    f(test);
    return 0;
}
