//modularity:声明
#include <iostream>
using namespace std;

double sqrt(double);

class Vector {
public:
    Vector(int s);
    double &operator[](int i);
    int     size( );

private:
    double *elem;
    int     sz;
};

// above are modularities
// below are representations
double sqrt(double d) {
    return d * d;
}
Vector::Vector(int s) : elem{ new double[s] }, sz{ s } {}
double &Vector::operator[](int i) {
    return elem[i];
}
int Vector::size( ) {
    return sz;
}
