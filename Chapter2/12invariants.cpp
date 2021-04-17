#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int s);
    double &operator[](int i) {
        return elem[i];
    }
    int size( ) {
        return sz;
    }

private:
    double *elem;
    int     sz;
};
Vector::Vector(int s) {
    if (s < 0)
        throw length_error{ };
    elem = new double[s];
    sz   = s;
}

void test( ) {
    try {
        Vector v(-27);
    }
    catch (std::length_error) {
    }
    catch (std::bad_alloc) {
    }
}

Vector v(-27);