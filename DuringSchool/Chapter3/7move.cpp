using namespace std;

/* bad move are as below
Vector
operator+(const Vector &a, const Vector &b) {
    if (a.size( ) != b.size( ))
        throw Vector_size_mismatch{ };

    Vector res(a.size( ));
    for (int i = 0; i != a.size( ); ++i)
        res[i] = a[i] + b[i];
    return res;
}

void f(const Vector &x, const Vector &y, const Vector &z) {
    Vector r;

    r = x + y + z;
}
*/

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

    Vector(Vector &&a);
    Vector &operator=(const Vector &&a);
    //'&&' means rvalue reference

    double &      operator[](int i);
    const double &operator[](int i) const;

    int size( ) const;
}

Vector::Vector(Vector &&a)
    : elem{ a.elem }, sz{ a.sz } {
    a.elem = nullptr;
    a.sz   = 0;
}

Vector f( ) {
    Vector x(1000);
    Vector y(1000);
    Vector z(1000);

    z = x;
    y = std::move(x);

    return z;
}
