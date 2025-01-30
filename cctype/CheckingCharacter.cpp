#include <iostream>
#include <cctype>

using namespace std;

int main () {
    
    try {
    // char ch = '12';
    // char ch = "A";
       char ch = '8'; 
       
        if (isalpha(ch)) {
            cout << ch << " is a letter." << endl;
        } 
        else if (isdigit(ch)) {
            cout << ch << " is a digit." << endl;
        } 
        else {
            cout << ch << " is NOT a digit or letter." << endl;
        }
    } 
    catch (...) {
        cout << "There was an error." << endl;
    }

    return 0;


}