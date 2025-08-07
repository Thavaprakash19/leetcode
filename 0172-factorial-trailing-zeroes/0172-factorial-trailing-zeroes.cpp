class Solution {
public:
    int trailingZeroes(int n) {
        int a=5;
        int res=0;
        while(n/a>=1){
            res+=n/a;
            a=a*5;
        }
        return res;
    }
};