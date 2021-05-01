void f(int n) {
    int           v1[n];  // error arraysize not a constant expression
    vector< int > v2(n);  // OK:vector with n int element
}

const char *p = "hello";
const char *q = "hello";
void        g( ) {
    if (p == q) {
    }  //==compares address rather than values its pointed to
}

/*char new_line[] = "123
    123 ";*/
// this is not a string but a syntax error(you can use \n instead)

char long_string[] =
    "hello1"
    "hello2";  // when it's too long, it can be initialized like this

string counts{ R"(1
22
333)" };  // it's equivalent to string x{"1\n22\n333"}

std::cout << "folder\\file";      // implementation character set string;
std::cout << R"(folder\file)";    // implementation character raw set string;
std::cout << u8"folder\\file)";   // UTF-8 string;
std::cout << u8R"(folder\file)";  // UT  F-8 raw string;
void f( ) {
    char  v[] = "abc";
    char *p   = v;  // implicit conversion of char[] to char*
    strlen(p);      // legal;
    strlen(v);      // implicit conversion of char[] to char*;
    v = p;          // error:cannot assign to array;
}
