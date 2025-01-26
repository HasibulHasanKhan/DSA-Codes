/*
 vector in C++ is a dynamic array provided by the Standard Template Library(STL).alignas

 //------------------------------
 Key Features of Vectors :

 1. Dynamic Size :
 2. Contigous Storage :
 3. Provides a rich set of functions for manipulation, such as adding , removing , and iterating through elements. 
*/
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector elements: ";
    for(int i = 0; i < numbers.size(); i++) {
       cout << numbers[i] << " "; 
    }
    cout << endl;

    // Remove the last element
    numbers.pop_back();

    cout << "After pop_back: ";
    for (int num : numbers) {
        cout << num << " ";

    }
    cout << endl;

    return 0;

}