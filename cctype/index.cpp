#include <iostream>
#include <cctype>
#include <string>
// #include <algorithm>
using namespace std;


int main() {
   
    string text = "Hello, World! This is C++ programming.";
    string cleanText;

    for (char c : text) {
        if (!ispunct(c)) {
            cleanText += tolower(c);
       }
    
    }
        cout << "Original: " << text << endl;
        cout << "Processed: " << cleanText << endl;
    return 0;

  
}