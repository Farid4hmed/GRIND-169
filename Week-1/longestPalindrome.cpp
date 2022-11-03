class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
        }
        bool odd = false;
        int count = 0;
        for(auto i: m){
            if(i.second%2==1){
                count += i.second-1;
                odd = true;
            }
            else count += i.second;
        }
        
        return odd==true? count+1 : count; 
        
        
    }
};
