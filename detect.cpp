#include "std_lib_facilities.h"

//this program implements a method to detect repeated words in a string.

int main(){
    string previous = " ";
    string current;
    while (cin>>current) {  //infinite loop reading from character in
        if (previous == current) {
            cout << "Repeated word: " << current << "!\n";
        }
        previous = current;  //retain the word
    }
}
