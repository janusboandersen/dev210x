#include "std_lib_facilities.h"

//this program implements a method to detect repeated words in a string.

int main(){
    int number_of_words = 0;
    string previous = " ";
    string current;
    while (cin>>current) {  //infinite loop reading from character in
        ++number_of_words;
        if (previous == current) {
            cout << "Word number " << number_of_words << ". ";
            cout << "Repeated word: " << current << "!\n";
        }
        previous = current;  //retain the word
    }
}
