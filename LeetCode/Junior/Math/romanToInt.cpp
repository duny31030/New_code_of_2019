// 超过81.02%
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> m;
        m['I'] = 1; m['V'] = 5;  m['X'] = 10;
        m['L'] = 50;m['C'] = 100;m['D'] = 500;m['M'] = 1000;
        int p = 0;
        int flag = 1;
        int si = s.size();
        for(int i = 0;i < si;i++) {
            if(i == si-1)
                p += m[s[i]];
            else 
            {
                int j = i;
                if(m[s[i]] > m[s[i+1]]) {
                    p += m[s[i]];
                }
                else {
                    if(m[s[i]] == m[s[i+1]]) {
                        while(m[s[j]] == m[s[j+1]]){
                            flag++;
                            j++;
                        }
                        i = i+flag-1;
                        p += flag*m[s[j]];
                        flag = 1;
                    }
                    else {
                        p += m[s[i+1]];
                        p -= m[s[i]];
                        i++;
                    }
                }
            }
        }
        return p;
    }
};
