
template < class T > class vector {
    T *elem;
    //
public:
    T &operator[](int i) {
        return elem[i];
    }
    const T &operator[](int i) const {
        return elem[i];
    }

    void push_back(const T &a);
};
void f(const vector< double > &v) {
    double d1 = v[1];
    v[2]      = 7;

    v.push_back(d1);
}

double &      dr = 1;    // error:lvalue needed
const double &cdr{ 1 };  // OK,implementation as below
double        temp = double{ 1 };
const double &cdr{ temp };

// The importance of function name
void increment(int &aa) {
    ++aa;
}
int next(int p) {
    return p + 1;
}
void f( ) {
    int x = 1;
    increment(x);
    x = next(x);
}

string var{ "abc" };
string f( );

string & r1{ var };      // lvalue reference,bind v1 to an lvalue var;
string & r2{ f( ) };     // lvalue reference,error:f() is an rvalue;
string & r3{ "hello" };  // lvalue reference,error:cannot bind to temporary;
string &&rr1{ f( ) };  // rvalue reference,fine:bind rr1 to rvalue(a temporary);
string &&rr2{ var };   // rvalue reference,error:var is an lvalue;
string &&rr3{
    "world"
};  // rvalue reference,fine:refer to a temporary holding it;

string f(string &&s) {
    if (s.size( )) {
        s[0] = toupper(s[0]);
    }
    return s;
}

template < class T > swap(T &a, T &b) {
    T tmp{ a };  // now we have two copies of a;
    a = b;       // now we have two copies of b;
    b = tmp;     // now we have two copies of tmp;
}  // old-style swap
template < class T > void swap(T &a, T &b) {
    T tmp{ static_cast< T && >(a) };
    a = static_cast< T && >(b);
    b = static_cast< T && >(tmp);
    // static_cast<T&&> returns the value of type T&& for x
    // static_cast<X&&>can be replaced by move();
}  // almost perfect swap

using rr_i    = int &&;
using lr_i    = int &;
using rr_rr_i = rr_i &&;  // int && && is an int&&
using lr_rr_i = rr_i &;   // int && & is an int&
using rr_lr_i = lr_i &&;  // int & && is an int&
using lr_lr_i = lr_i &;   // int & & is an int&
// syntax int && & is not allowed
