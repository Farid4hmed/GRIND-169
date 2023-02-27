class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count1s = 0;
        while(n>0){
            if((n&1) == 1)count1s++;
            n = n>>1;
        }

        return count1s;
    }
};
