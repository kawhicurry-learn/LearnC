// constexpr: evaluate at compile time
// const: do not modified in this scope

char *const cp;   // const pointer to char;
char const *pc;   // pointer to const char;
const char *pc2;  // pointer to const char;

/*
prefix *const makes a pointer constant;
surfix const*(include const char*)makes a pointer point to a const object;
*/

void f( ) {
    int        a  = 1;
    const int  c  = 2;
    const int *p1 = &c;
    const int *p2 = &a;
    int *      p3 = &c;  // error: initialization of int* with const int*;
}
