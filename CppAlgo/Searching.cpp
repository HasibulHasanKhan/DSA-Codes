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
    auto its = min_element(numbers.begin(), numbers.end());
    
    auto upper = upper_bound(numbers.begin() , numbers.end() ,5);
    cout << *its;   

    cout << endl;
    cout << *upper;
   return 0;

}