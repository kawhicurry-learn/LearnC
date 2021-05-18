#include <vector>

void silly(vector< Entry > &book) {
    int i = book[ph.size( )].number;
}

template < typename T > class Vec : public std::vector< T > {
public:
    using vector< T >::vector;

    T &operator[](int i) {
        return vector< T >::at(i);  // range check
    }
    const T &operator[](int i) const {
        return vector< T >::at(i);  // range check const objects;
    }
};

void checked(Vec< Entry > &book) {
    try {
        book[book.size( )] = { "Jos", 999 };
    }
    catch (out_of_range) {
        cout <<"range error\n";
    }
}