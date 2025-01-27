#include <iostream>
#include <queue>
using namespace std;

int main () {
    queue <string> cars;


  // Add elements to the queue
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");

  // access /change  the front element 
  cout << cars.front() << endl;

  // access / change the back element 
  cout << cars.back();

  // remove the element :

  cars.pop();
  
  cout << cars.size();
  cout << cars.empty();

  return 0;
    
}