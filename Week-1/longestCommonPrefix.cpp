class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string curr = strs[0];

        for(int i=1; i<strs.size(); i++){
            while(curr!="" && strs[i].substr(0, curr.length()) != curr){
                curr = curr.substr(0, curr.length()-1);
            }
        }

        return curr;
    }
};
