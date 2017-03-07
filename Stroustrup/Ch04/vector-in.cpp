#include "../lib/std_lib_facilities.h"

int main() {

    //Use the cin facility to read elements and push these to a vector
    vector<double> temps;  //declare empty vector
    for (double temp; cin>>temp; ) {    //read from cin into temp (cin returns true as long as value is read)
        temps.push_back(temp);          //push to the vector
    }

    //Compute the mean temperature
    double sum = 0;
    for (double x: temps) sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    //Compute median temperature
    sort(temps);  //use the STL sort algorithm
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';

}
