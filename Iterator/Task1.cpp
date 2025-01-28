#include <iostream>
// #include <vector>
// #include <string>
using namespace std;

// int main () {
//     vector<string> cars =  {"Volvo", "BMW", "Ford", "Mazda"};

//     //Create an iterator named it .

//     vector<string>::iterator it;
//     //also can be use with iterator keyword.

//     //Use the iterator to loop through the vectro.

//     for (it = cars.begin(); it != cars.end(); it++){
//         cout << *it << endl;
//     }
// }
int main() {
    // Vector of strings (like a bookshelf with book titles)
    // vector<string> books = {"Book A", "Book B", "Book C"};

    // // Create an iterator for the vector
    // vector<string>::iterator it;

    // // Use the iterator to traverse the vector
    // for (it = books.begin(); it != books.end(); ++it) {
    //     cout << "Reading: " << *it << endl; // Dereference the iterator to get the value
    // }
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
    return 0;
}