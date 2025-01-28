#include <iostream>
#include <map>
using namespace std;

int main () {
    map <string, int > people = {{"Jhon", 30},{"Apple", 20}, {"Banana", 12}};


    cout  << people.count("Jhon");

    return 0;
}