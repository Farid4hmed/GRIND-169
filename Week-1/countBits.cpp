class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0] = 0;

        for(int i=0; i<=n; i++){
            int x = i;
            int count1s = 0;
            while(x>0){
                if((x&1) == 1)count1s++;
                x = x>>1;
            }
            ans[i] = count1s;
        }

        return ans;
    }
};
