#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

int main () {
   vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
 
    vector<int> numbers = {1, 7, 3, 5, 9, 2};
   sort(cars.begin(), cars.end());

   for (string car : cars) {
    cout << car << endl;
   }
   

   // for numbers
  sort(numbers.begin(), numbers.end());

  // reverse 
  sort(numbers.rbegin(), numbers.rend());

   return 0;
}

