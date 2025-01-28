#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Loop through the vector with an iterator
  for (auto it = cars.begin(); it!= cars.end(); ++it){
    cout << *it << endl;
  }
  return 0;
}
