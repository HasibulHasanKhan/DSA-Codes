#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> numbers = {1,34, 3, 34,33};

     for (auto& num : numbers) {
        num * 2 ;
     }

     for (const auto& num : numbers) {
        cout << num << " ";

     }
     cout << endl;

     return 0;
}