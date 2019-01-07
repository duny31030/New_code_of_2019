// 超过29.47%
class Solution {
public:
    string countAndSay(int n) {
        string r[32];
        string a[10] = {"0","1","2","3","4","5","6","7","8","9"};
        r[1] = "1";
        if(n == 1)  return r[1];
        for(int i = 2;i <= n;i++) {
            r[i] = "";
            int len = r[i-1].length();
            int cou = 1;
            for(int j = 0;j < len;j++) {
                if(r[i-1][j] == r[i-1][j+1]) {
                    cou++;
                }
                else {
                    r[i] = r[i] + a[cou];
                    r[i].push_back(r[i-1][j]);
                    cou = 1;
                }
            }
        }
        return r[n];
    }
};
