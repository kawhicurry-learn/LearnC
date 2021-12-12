#include <vector>
#include <math.h>
using namespace std;
void some_function(){
    const int dmv=17;//dmv is a named constant;
    double var=16;
    constexpr double max1=1.4*(dmv);
    //constexpr max2=1.4*sqrt(dmv);//constexpr will examine if dmv is a constant,only constant allowed;
    //constexpr could be used to check if there is a constant will be pass to a new name
    constexpr double max3=1.4*(dmv);
}