#include <vector>

struct Entry {
    string name;
    long   number;
};

vector< Entry > phone_book = { { "A", 123 } { "b", 234 } };

void print_book(const vector< Entry > &book) {
    // for(const auto& x:book){}
    for (int i = 0; i < book.size( ); ++i) {
        cout << book[i] << '\n';
    }
}
