class Solution {
public:
    bool isPalindrome(string s) {
        string x = "";
        int n = s.size();
        
        for(int i=0; i<n; i++){
            if(s[i] >= 65 && s[i] <= 90){
                x += tolower(s[i]);
            }
            if(s[i] >= 97 && s[i] <= 122){
                x += s[i];
            }
            if(s[i] >= 48 && s[i] <= 57){
                x += s[i];
            }
        }
        
        int l = 0;
        int r = x.size()-1;
        while(l<r){
            if(x[l] != x[r])return false;
            l++;
            r--;
        }
        
        return true;
    }
};
