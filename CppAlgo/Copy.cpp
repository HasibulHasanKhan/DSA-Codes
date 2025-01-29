#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main (){
      vector<int> numbers = {1, 7, 3, 5, 9, 2};
      vector<int> copiedNumbers(6);

      copy(numbers.begin(), numbers.end(), copiedNumbers.begin());

     for (int num : copiedNumbers) {
        cout << num << endl;
     }
     return 0;
}