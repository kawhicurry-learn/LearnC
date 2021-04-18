

template < typename T > class Vector {  //'typename T' means 'for all types T'
private:
    T * elem;
    int sz;

public:
    Vector(int s);
    ~Vector( ) {
        delete[] elem;
    }
    T &      operator[](int i);
    const T &operator[](int i) const;
    int      size( ) const {
        return sz;
    }
};

template < typename T > Vector< T >::Vector(int s) {
    if (s < 0)
        throw Negative_size{ };
    elem = new T[s];
    sz   = s;
}

template < typename T > const T &Vector::operator[](int i) const {
    if (i < 0 || size( ) <= i)
        throw out_of_range{ "Vector::operator[]" };
    return elem[i];
}

Vector< char >        vc(200);
Vector< string >      vs(17);
Vector< list< int > > vli(45);

void write(const Vector< string > &vs) {
    for (int i = 0; i != vs.size( ); ++i)
        cout << vs[i] << endl;
}

template < typename T > T *begin(Vector< T > &x) {
    return &x[0];
}

template < typename T > T *end(Vector< T > &x) {
    return x.begin( ) + x.size( );
}

void f2(const Vector< string > &vs) {
    for (auto &s : vs)
        cout << s << endl;
}
