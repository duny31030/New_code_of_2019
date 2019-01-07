// 超过24.65%
class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> flag;
        int si = s.size();
        if(si == 0)
            return -1;
        int st = 0,en = 1;
        flag[s[0]]++;
        while(st < si && en < si) {
            while(flag[s[st]] > 1 && st < si)
                st++;
            while(flag[s[en]] < 2 && en < si) {
                flag[s[en]]++;
                en++;
            }
            en++;
        }
        while(flag[s[st]] > 1 && st < si)
            st++;
        if(st < si)
            return st;
        else 
            return -1;
    }
};
