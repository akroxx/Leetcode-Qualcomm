class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int notZero =0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[notZero] = nums[i];
                notZero++;
            }
        }
        while(notZero < nums.size()){
            nums[notZero] = 0;
            notZero++;
        }
    }
};