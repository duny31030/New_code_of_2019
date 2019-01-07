// 超过97.46%
class Solution {
public:
    string reverseString(string &s) {
        int si = s.size();
        for(int i = 0,j = si-1;i < j;i++,j--) {
            swap(s[i],s[j]);
        }
        return s;
    }
};
