class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int>num_set( nums.begin(),nums.end());
     int max_len=0;
    
     for(int num:num_set){
        if(!num_set.count(num-1)){
            int curr_num=num;
            int curr_len=1;
            while (num_set.count(curr_num + 1)) {
                    curr_num++;
                    curr_len++;
                }
        max_len = max(max_len, curr_len);
      }
     }
      return max_len;
    }
};
