#include <iostream>
using namespace std;

class Vector {
public:
    Vector(int s) : elem{ new double[s] }, sz{ s } {}
    double &operator[](int i);
    int size( ) {
        return sz;
    }

private:
    double *elem;
    int     sz;
};
double& Vector::operator[](int i){
    if(i<0||size()<=i)throw out_of_range{"Vector::operator[]"};
    return elem[i];
}
int main(){
    int i;
    Vector v(5);
    i=v[-1];
    return 0;
}