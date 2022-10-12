class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        int x = s.size();
        int y = t.size();
        
        if(x!=y)return false;
        for(int i=0; i<x; i++){
            m1[s[i]]++;
            m1[t[i]]--;
        }
        
        for(auto x: m1){
            if(x.second > 0)return false;
        }
        return true;
    }
};
