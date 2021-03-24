#include <complex> //complex need to be included
#include <vector>
using namespace std;
double d1 = 2.3;
double d2{ 2.3 };

complex< double > z = 1;
complex< double > z2 = {d1,d2};
complex<double> z3={1,2};

vector <int> v{1,2,3,4,5,6};

int i1=7.2;
int i2 {7.2};//error:floating-point to integer conversion
int i3={7.2};//error:floating-point to integer conversion (the = is redundant)

auto b=true;
auto ch='x';
auto i=123;
auto d=1.2;
