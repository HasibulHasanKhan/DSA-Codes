#include <iostream>
#include <map>
using namespace std;

int main () {
    map <string, int > people = {{"Jhon", 30},{"Apple", 20}, {"Banana", 12}};


    cout  << people.count("Jhon");

    //get the value : 

    cout << people["Jhon"] << endl;

   cout << people.at("Banana") << endl;

   //change the value :
   people["Jhon"] =523;
   people.at("Jhon") = 243;

//add new element 

people.insert({"Hasib", 56});
//also add and change the value.
people["Liam"] = 24;


    return 0;
}