#include <iostream>
#include <list>
using namespace std;

int main () {
    list <string> cars = {"volvo", "ford", "mazda"};

    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}