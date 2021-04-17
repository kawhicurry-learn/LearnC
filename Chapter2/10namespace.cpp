#include <iostream>
namespace My_code {
class complex {};
int main( );
int var=66;
}  // namespace My_code

int My_code::main( ) {
    std::cout << "1";
    return 1;
}

int My_code::main( ) {
    std::cout<<My_code::var;
    return My_code::main();
}