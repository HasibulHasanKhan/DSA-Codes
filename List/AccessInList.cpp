#include <iostream>
#include <list>
using namespace std;

int main () {
    list <string> cars = {"volvo", "ford", "mazda"};
    //  //get the first element
    // cout << cars.front() << endl;
 
    //  // get the last element
    // cout << cars.back() << endl;


    //change the list 

    cars.front() = "Opel";

    cars.back() = "Toyota";

     cout << cars.front() << endl;
     cout << cars.back() << endl;

    return 0;
}