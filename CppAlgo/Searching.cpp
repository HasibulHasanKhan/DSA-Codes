#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
   vector<int> numbers = {1, 7, 3, 5, 9, 2};

   auto it = find(numbers.begin(), numbers.end(), 3);

   if(it != numbers.end()) {
     cout << "The number 3 was found ! " << endl;
   } else {
     cout << "The numbers 3 was not found. " << endl;
   }

   return 0;

}