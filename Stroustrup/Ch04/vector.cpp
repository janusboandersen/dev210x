#include "../lib/std_lib_facilities.h"

int main() {
    //initialize a vector
    vector<int> v = {5, 7, 9, 4, 6, 8};

    //Traverse a vector using its size() method
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << '\n';
    }

    //Traverse a vector using the range-for-loop (for each int x in v...)
    for (int x : v) {
        cout << x << '\n';
    }

    //Declare an empty vector
    vector<double> vd;

    //Add an element to the back of the vector using the push_back member function / method
    vd.push_back(2.7);
    vd.push_back(5.6);
    vd.push_back(7.9);

    for (double x: vd) {
        cout << x << '\n';
    }
}
