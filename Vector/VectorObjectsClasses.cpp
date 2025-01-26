#include <iostream>
#include <vector>
using namespace std;

class Person {
    public:

     string name;
     int age;

     Person(string n, int a) : name(n), age(a) {}

     void display() const {
        cout << name << " ("<< age <<")" << endl;
     }
};

int main () {
    vector <Person> people;

    people.push_back(Person("Alice", 30));
    people.push_back(Person("Alice", 30));

    for(const auto& person : people) {
        person.display();
    }

    return 0;
}