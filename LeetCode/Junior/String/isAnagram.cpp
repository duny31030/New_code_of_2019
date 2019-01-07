// 超过97.36%
class Solution {
public:
    bool isAnagram(string s, string t) {
        int a[60] = {0};
        int len1 = s.size();
        int len2 = t.size();
        if(len1 != len2)
            return false;
        for(int i = 0;i < len1;i++){
            a[s[i]-'A']++;
        }

        for(int i = 0;i < len2;i++){
         	a[t[i]-'A']--;   
        }
        for(int i = 0;i < 60;i++){
         	if(a[i] != 0)
                return false;
        }
    return true;
    }
};
