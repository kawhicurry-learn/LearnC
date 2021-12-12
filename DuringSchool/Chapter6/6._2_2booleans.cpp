// fundament
void f(int a, int b) {
    bool b1{ a == b };
    //
}

// convert
bool b2 = true;
int  i1 = b2;       // i=1
bool b3 = 7;        // b3 != 0 ,thus b3 = 1
bool b4{ 7 };       // error://TODO:
bool b5{ 7 != 0 };  // right syntax for {}
void g(int *p) {
    bool b = p;               // narrows to true or false
    bool bb{ p != nullptr };  // explicit test against nullptr
    if (p) {
    }
}
