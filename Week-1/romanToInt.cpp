class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int l = s.length();
        int num = 0;
        for(int i=l-1; i>=0; i--){
            num += m[s[i]];
            if(i!=0){
                if(m[s[i-1]] < m[s[i]]){
                    num -= m[s[i-1]];
                    i--;
                }
                
            }
        }

        return num;
    }
};
