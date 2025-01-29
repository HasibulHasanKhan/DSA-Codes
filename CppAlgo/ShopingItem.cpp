
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    vector<string> shoppingList = {"Eggs", "Bread", "Milk", "Butter"};

    string item = "Milk";

    auto it = find(shoppingList.begin(), shoppingList.end(), item);

  if (it != shoppingList.end()) {
        cout << item << " is already on the shopping list!" << endl;
    } else {
        cout << item << " is missing from the shopping list." << endl;
    }
return 0;
}