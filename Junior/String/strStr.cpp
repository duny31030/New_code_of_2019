// 超过99.25.%
class Solution {
public:
    int strStr(string haystack, string needle) {
        int len2 = needle.size();
        if(len2 == 0)
            return 0;
        int len = haystack.size();
        for(int i = 0,j = 0;i < len && j < len2;){
            if(haystack[i] == needle[j])
                i++,j++;
            else 
                i = i-j+1,j = 0;
            if(j == len2)
                return i-j;
        }
        return -1;
    }
};
