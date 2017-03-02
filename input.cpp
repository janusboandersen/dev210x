#include "std_lib_facilities.h"

int main(int argc, const char * argv[]){

    std::cout << "Please enter your first name and age:\n";
    string first_name = "???";
    double age = -1;
    cin >> first_name >> age;
    //cin >> age;
    cout << "Hello, " << first_name << " (age " << age*2 << ")!\n";
    return 0;
}
