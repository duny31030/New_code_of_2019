// 超过96.96%
class Solution {
public:
    bool isPalindrome(string s) {
        int si = s.size();
        for(int i = 0,j = si-1;i < j;i++,j--)
        {
            while(!((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))) {
                i++;
            }
            while(!((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9'))) {
                j--;
            }
            if(i > j)  break;
            if(s[i] == s[j]) {
                continue;
            }
            else {
                if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                    if(abs(s[i]-s[j]) != 32)
                        return false;
                }
                else {
                    if(s[i] != s[j])
                        return false;
                }
                
            }
        }
        return true;
    }
};
