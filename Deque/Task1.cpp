#include <iostream>
#include <deque>
using namespace std;

int main() {
  
  deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};// posible to add element at declaration.

  // Print deque elements
 for (string car : cars) {
    cout << car << endl;
 }

 //access element 
  string elementOne = cars[0];
  string elementtwo = cars[2];

  // access first and last element :
  cout << cars.front() << endl;
  cout << cars.back() << endl;
// To access element at a specific index . use at() method.
  cout << elementOne << " " << elementtwo << endl;

  // at ()

  string adMethod = cars.at(2);

  // change a deque element

  cars[0] = "Bangladesh"; // also cars.at(0) = "Bangladesh"
  cout << cars.at(0) << endl; 
  cout << adMethod << endl;

  // add and remove element 
  cars.push_front("Tesla");
  cars.push_back("vw");

  // remove deque element

  cars.pop_front() ;
  cars.pop_back() ;

  // looping 
  for (int i = 0; i < cars.size() ; i++){
    cout << cars[i] << endl;
  }
// step two 
for (string car : cars) {
    cout << car << endl;
}

  return 0;

  
}
