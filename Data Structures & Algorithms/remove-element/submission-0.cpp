#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // 'k' acts as our "write" pointer. It keeps track of exactly where 
        // the next valid (non-val) number should be placed.
        int k = 0;
        
        // 'i' acts as our "read" pointer. It scans every single element.
        for (int i = 0; i < nums.size(); i++) {
            
            // If the current number is NOT the value we want to remove...
            if (nums[i] != val) {
                // ...write it to the 'k' position and move 'k' forward by 1.
                nums[k] = nums[i];
                k++;
            }
            // If nums[i] IS equal to val, we do nothing and just let 'i' keep moving.
        }
        
        
        return k;
    }
};