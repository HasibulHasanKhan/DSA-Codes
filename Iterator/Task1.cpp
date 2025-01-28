#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<string> cars =  {"Volvo", "BMW", "Ford", "Mazda"};

    //Create an iterator named it .

    vector<string>::iterator it;

    //Use the iterator to loop through the vectro.

    for (it = cars.begin(); it != cars.end(); ++it){
        cout << *it << endl;
    }
}