#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main () {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
     vector<int> numbers = {1, 7, 3, 5, 9, 2};


    sort(cars.begin(), cars.end());

    sort(numbers.rbegin(), numbers.rend());

    for(string car : cars) {
        cout << car << endl;
    }

    return 0;
}