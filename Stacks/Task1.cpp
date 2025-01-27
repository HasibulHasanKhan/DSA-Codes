#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack<string> cars;

   // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // change the value of the top element.

//   cars.top() = "Tesla";

  //check if the stack is empty
  cout << cars.empty() << endl;
  cout<< cars.size() << endl;
  // remove the element 
  cars.pop();

  //Access the top element 
  cout << cars.top();

  return 0;
  
}