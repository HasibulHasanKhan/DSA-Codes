#include <iostream>
#include <vector>
#include<map>
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
    cout << car << endl ;
   }
     cout << "  " << endl ;
   for ( auto it = cars.rbegin(); it != cars.rend(); ++it) {
    cout << *it << endl;
   }

    map<string, int> people = { {"Jhon", 24}, {"Hasib", 23},{"Hasan", 21} };

  for (auto it = people.begin(); it != people.end(); ++it){
    cout << it->first << " is: " << it->second << endl;
  }


   return 0;
}