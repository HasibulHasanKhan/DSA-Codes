#include <iostream>
#include <set>
using namespace std;

int main () {
    set <string> cars =  {"Volvo", "BMW", "Ford", "Mazda"};

    // loping 
    for (string car : cars) {
        cout << car << endl;
    }
    
    return 0;
}