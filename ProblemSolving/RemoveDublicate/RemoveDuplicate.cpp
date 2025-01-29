#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Edge case: empty array

        int i = 0; // Pointer for unique elements
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) { // Found a new unique element
                i++;
                nums[i] = nums[j]; // Move it to the correct position
            }
        }
        return i + 1; // Number of unique elements
    }
};

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // Input sorted array
    
    Solution sol;
    int k = sol.removeDuplicates(nums); // Call the method

    // Output the results
    cout << "Number of unique elements: " << k << endl;
    cout << "Updated array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " "; // Print only the unique elements
    }
    cout << endl;

    return 0;
}
