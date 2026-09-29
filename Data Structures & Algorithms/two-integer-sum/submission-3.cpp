using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Pointer 'i' locks onto the first number
        for (int i = 0; i < nums.size(); i++) {
            
            // Pointer 'j' scans all the numbers AFTER 'i'
            for (int j = i + 1; j < nums.size(); j++) {
                
                // Check if the two numbers add up to the target
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // If they do, return their indices
                }
            }
        }
        
        return {}; // Fallback if no pair is found
    }
};
   