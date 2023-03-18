class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        int j = 0;
        int maxLen = 0;
        for(int i=0; i<s.length(); i++){
            m[s[i]]++;
            while(m[s[i]]>1){
                m[s[j++]]--;
            }
            maxLen = max(maxLen, i-j+1);
        }

        return maxLen;
    }
};
