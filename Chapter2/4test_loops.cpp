#include <iostream>
using namespace std;

bool accept( ) {
    cout << "Do you want to proceed (y or n)?\n";

    char answer = 0;
    cin >> answer;
    //<< means 'put to',while >> means 'get form'
    if (answer == 'y')
        return true;
    return false;
}

int main( ) {
    cout << accept( );
    return 0;
}