#include "../lib/std_lib_facilities.h"

int main() {

    // number of centimeters in an inch
    constexpr double cm_per_inch = 2.54;

    // length in inches or centimeters
    double length = 1;

    char unit = 'a';

    cout<< "Please enter a length followed by a unit (c or i):\n";
    cin >> length >> unit;

    //switch value must be of type int, char, enumeration
    //cannot switch on a string! (if you need to do this, use a map or if)
    //values in the case labels must be constexpr
    switch (unit) {
    case 'i':
        cout << length << "in == " << cm_per_inch*length << "cm\n";
        break;
    case 'c':
        cout << length << "cm == " << length/cm_per_inch << "in\n";
        break;
    default:
        cout << "Sorry, I don't know a unit called '" << unit << "'\n";
        break;
    }

}
