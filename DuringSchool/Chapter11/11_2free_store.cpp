
#include <string>
using namespace std;
string reverse(const string &s) {
    string ss;
    for (int i = s.size - 1; 0 <= i; --i) {
        ss.push_back(s[i]);
    }
    return ss;
}

void f(int n) {
    vector< int > *p = new vector< int >(n);
    int *          q = new int[n];
    //... tail
    delete p;
    delete[] q;
}