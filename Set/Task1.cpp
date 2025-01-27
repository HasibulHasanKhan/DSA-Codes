#include <iostream>
#include <set>
using namespace std;

int main () {
    set <string> cars =  {"Volvo", "BMW", "Ford", "Mazda"};
//
 //set <int> numbers = {2,4,53,63,3};
    // loping 
    for (string car : cars) {
        cout << car << endl;
    }
    /*
     for (int num : numbers) {
      cout << num << endl;
     }

    
    */

   /*
    // sort the element :

    set <int , greater<int>> numbers = {2,43,5,33,3};
   */

  // add element :

  cars.insert("tesla");

// remove element
 cars.erase("tesla");

 // remove all element :

//  cars.clear();



    return 0;
}