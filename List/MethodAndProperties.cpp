// add and remove 

#include <iostream>
#include <list>
using namespace std;

int main () {
     list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

     cars.pop_front(); // remove the 1st element.

     cars.pop_back(); // remove the last element.

     for (string car : cars) {
        cout << car << endl;
     }

     cout << cars.size();

     cout << cars.empty();
     return 0;
}