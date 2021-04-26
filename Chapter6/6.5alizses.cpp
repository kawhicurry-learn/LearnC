using Po_char = char *;
Po_char p1    = nullptr;
char *  p3    = p1;

template < class T > class vector {
    using value_type = T;
    //...
};

typedef int int32_t;

using Char  = char;
using Uchar = unsigned char;  // OK
using Uchar = unsigned Char;  // error