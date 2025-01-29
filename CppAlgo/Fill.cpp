#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<int> numbers(5);

    fill(numbers.begin(), numbers.end(), 20);

    for(int num : numbers) {
        cout << num << endl;
    }

    return 0;
}