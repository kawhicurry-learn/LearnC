int x;  // global variable

void f( ) {
    int x;  // local variable
    x = 1;  // assign to local variable
    {
        int x;  // hide first local variable
        x = 2;  // assign to second local variable
    }
    x = 3;  // assign to first local variable
}

int *p = &x;  // take address of first variable

void f2( ) {
    int x = 1;  // hide global variable
    ::x   = 2;  // assign to global variable
    x     = 2;  // assign to local variable
}

void f3( ) {
    int x = x;  // perverse: initialize x with its own (uninitialized) value
}