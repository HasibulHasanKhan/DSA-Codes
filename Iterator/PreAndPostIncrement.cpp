#include <iostream>
using namespace std;

// int main() {
//     cout << "Using Pre-increment (++i):" << endl;
//     for (int i = 0; i < 5; ++i) { // Increment happens first
//         cout << i << " ";         // Prints updated value
//     }

//     cout << "\nUsing Post-increment (i++):" << endl;
//     for (int i = 0; i < 5; i++) { // Value is used first, then incremented
//         cout << i << " ";         // Prints current value
//     }

//     return 0;
// }

int main() {
    cout << "Serving Customers (Pre-increment):" << endl;

    int pre_counter = 0; // Token counter for pre-increment
    for (int i = 0; i < 5; ++i) {
        cout << "Now serving token: " << ++pre_counter << endl; // Update first, then display
    }

    cout << "\nServing Customers (Post-increment):" << endl;

    int post_counter = 0; // Token counter for post-increment
    for (int i = 0; i < 5; i++) {
        cout << "Now serving token: " << post_counter++ << endl; // Display first, then update
    }

    return 0;
}
