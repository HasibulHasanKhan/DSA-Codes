#include <iostream>
#include <vector>
using namespace std;

int main () {
   vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

   for(auto it = cars.begin(); it != cars.end(); ) {
    if (*it == "BMW") {
        it = cars.erase(it);
    } else {
        ++it;
    }
   }

   for (const string& car : cars) {
    cout << car << endl;
   }
}