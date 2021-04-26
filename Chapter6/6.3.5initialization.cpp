// four format
int a1{ 2 };  // this one is recommended strongly
int a2 = { 3 };
int a3 = 4;
int a4(5);
// list-initialization is not allowed for narrowing

// to initialize lists
int a[] = { 1, 2 };
struct S {
    int x, string s
};
S                 s{ 1, "Helios" };
complex< double > z = { 0, pi };
vector< double >  v = { 0.0, 1.1, 2.2 };

complex< double > z(0, pi);
vector< double >  v(10, 3.3)
    // ues constructor:v get 10 elements initialized to 3.3
