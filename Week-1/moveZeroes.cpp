class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;
        while(idx<nums.size() && nums[idx] != 0){
            idx++;
        }
        if(idx == nums.size())return;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0 && idx < i){
                swap(nums[i], nums[idx]);

                while(idx<nums.size() && nums[idx] != 0){
                        idx++;
                }
                if(idx == nums.size())return;   
            }
        }
    }
};
