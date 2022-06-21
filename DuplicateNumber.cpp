class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int curr = abs(nums[i]);
            if(nums[curr] < 0){
                res = abs(nums[i]);
                break;
            }
            nums[curr]*=-1;
        }
        
        for(auto& num : nums)
            num = abs(num);
        return res;
    }
};