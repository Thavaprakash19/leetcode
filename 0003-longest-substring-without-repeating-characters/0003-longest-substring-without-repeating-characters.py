class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        if len(s)==0:
            return 0

        i=0
        j=0
        seen=set()
        max_count=0

        while j<len(s):
            if s[j] not in seen:
                seen.add(s[j])
                j+=1
                max_count=max(max_count,j-i)
            else:
                while s[i]!=s[j]:
                    seen.remove(s[i])
                    i+=1
                seen.remove(s[i])
                i+=1


        return max_count                 






        # Below Algo takes O(n^2) time
        # max_seq=1
        # str_len=len(s)

        # if str_len==0:
        #     return 0

        # for i in range(str_len-1):
        #     j=i+1
        #     count=1
        #     check=set(s[i])
        #     while j<str_len and (s[j] not in check):
        #         check.add(s[j])
        #         count+=1
        #         j+=1
        #     if count>max_seq:
        #         max_seq=count
        
        # return max_seq
        