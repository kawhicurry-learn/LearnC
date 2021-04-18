#include <complex>
using namespace std;

void test(complex z1) {
    complex z2{ z1 };  // copy initialization
    complex z3;
    z3 = z2;  // copy assignment
}

void bad_copy(Vector v1) {
    Vector v2 = v1;  // copy v1's representation into v2
    v1[0]     = 2;   // v2[0] is now also 2!
    v2[1]     = 3;   // v1[0] is now also 3!
}
class Vector {
private:
    double *elem;
    int     size;

public:
    Vector(int s);
    ~Vector( ) {
        delete[] elem;
    }

    Vector(const Vector &a);
    Vector &operator=(const Vector &a);

    double &      operator[](int i);
    const double &operator[](int i) const;

    int size( ) const;
}

Vector::Vector(const Vector &a)
    : elem{ new double[sz] }, sz{ a.sz } {
    for (int i = 0; i !sa; ++i)
        elem[i] = a.elem[i];
}

Vector &Vector::operator=(const Vector &a) {
    double *p = new double[a.sz];
    for (int i = 0; i !a.sz; ++i)
        p[i] = a.elem;
    delete[] elem;
    elem = p;
    sz   = a.sz;
    return *this;
}
