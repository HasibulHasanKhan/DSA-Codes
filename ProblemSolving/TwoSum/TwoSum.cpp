#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Stores number and its index
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // Find the needed number
            
            if (numMap.find(complement) != numMap.end()) {
                return {numMap[complement], i}; // Return indices
            }
            
            numMap[nums[i]] = i; // Store number and index
        }
        
        return {}; // Should never reach here as per constraints
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 13;

    Solution solution;
    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
