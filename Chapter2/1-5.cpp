#include <iostream>
using namespace std;
bool accept1( ) {
    cout << "Do you want to proceed (y ro n)\n";

    char answer = 0;
    cin >> answer;

    if (answer == 'y')
        return true;
    return false;
}

bool accept2( ) {
    cout << "do you want to proceed (y ro n)\n";

    char answer = 0;
    cin >> answer;

    switch (answer) {
    case 'y':
        return true;
    case 'n':
        return false;
    default:
        cout << "i will take that for a no.\n";
        return false;
    }
}
bool accept3( ) {
    int tries = 1;
    while (tries < 4) {
        cout << "do you want to proceed (y ro n)\n";

        char answer = 0;
        cin >> answer;

        switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "i will take that for a no.\n";
            ++tries;
        }
    }
    cout<<"I'll take that for a no.\n";
    return false;
}