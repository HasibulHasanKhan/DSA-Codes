#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<string> books = {"Book A", "Book B", "Book C"};

    vector<string>::iterator it;

    for (it = books.begin(); it !=books.end(); ++it) {
        *it = "Modified " + *it;
    }

    for (const auto& book : books) {
        cout << book << endl;
    }
}

