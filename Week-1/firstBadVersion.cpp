class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int h = n;
        
        while(l<=h){
            int m = l + (h-l)/2;
            
            if(m!=0 && isBadVersion(m) && !isBadVersion(m-1))return m;
            if(m==0 && isBadVersion(m))return m;
            if(isBadVersion(m))h = m-1;
            
            else l = m+1;
        }
        
        return n;
    }
};
