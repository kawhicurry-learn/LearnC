#include <complex>
#include <vector>//remeber to preinclude the header files;
using namespace std;
void some_function( ) {
    double            a = 2.2;
    int               i{ 2 };//another way to initialize or assigned to a variable
    vector< int >     v{ 1, 2, 3 };
    complex< double > z = 1;
    complex< double > z2{ 1, 2 };//z2 is 1 or 2;
    auto a=2.2;//a will be a double variable;
}

//Don't introduce a name until you have a suitable value for it;