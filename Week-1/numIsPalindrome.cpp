class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string s = "";

        int n = x;

        while(n>0){
            s += to_string(n%10);
            n = n/10;
        }

        int low = 0;
        int high = s.length()-1;

        while(low<high){
            if(s[low] != s[high])return false;
            low++;
            high--;
        }

        return true;
    }
};
