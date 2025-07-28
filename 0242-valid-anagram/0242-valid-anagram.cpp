class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>result;
        if(s.length()!=t.length()){
            return false;
        }
        for(auto ch:s){
            result[ch]++;
        }
        for(auto ch:t){
            if(result.find(ch)==result.end()||result[ch]==0){
                return false;
            }
            result[ch]=result[ch]-1;
        }
        return true;
    }
};