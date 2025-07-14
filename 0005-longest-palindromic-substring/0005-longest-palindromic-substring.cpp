class Solution {
public:
    string longestPalindrome(string s) {
        string res;
        int reslen=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int r=i;
            int l=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>reslen){
                    res=s.substr(l,r-l+1);
                    reslen=r-l+1;
                }
                l-=1;
                r+=1;
            }
            r=i+1;
            l=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>reslen){
                    res=s.substr(l,r-l+1);
                    reslen=r-l+1;
                }
                l-=1;
                r+=1;
            }
        }
        return res;
    }
};