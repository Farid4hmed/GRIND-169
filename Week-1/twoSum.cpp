class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++){
            m[nums[i]] = i;
        }
        vector<int> ans;
        
        for(int i=0; i<n; i++){
            if(m.find(target - nums[i]) != m.end()){
                if(m[target - nums[i]] != i){
                ans.push_back(i);
                ans.push_back(m[target - nums[i]]);
                break;
                }
            }
        }
        return ans;
    }
};
