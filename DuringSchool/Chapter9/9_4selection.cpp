if ( ) {
} else {
}

int a, b;
a > b ? a = 1 : b = 1;

switch ( ) {
case 1:
    break;
case 2:
    break;
default:
}
enum class Vessel { cup, glass, goblet, chalice };
void problematic(Vessel v) {
    switch (v) {
    case Vessel::cup:
        break;
    case Vessel::glass:
        break;
    case Vessel::goblet:
        break;
    }  // leave out the default to let complier warn you add case of 'chalice';
}