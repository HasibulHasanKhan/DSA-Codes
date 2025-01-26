
/*
auto : automatically deduces the type of the variable based on its initializer or the context.abort
& : Makes the variable a reference , meaning it referes to the original object rather than creating a copy.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
     const string name;
     int& age;

    public:

     Person(const string& n, int& a) : name(n), age(a) {}


     void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;

     }
};

int main () {
    int ageValue = 25;
    Person p("Bob", ageValue);

    p.display();

    ageValue = 40;

    p.display();

    return 0;
}