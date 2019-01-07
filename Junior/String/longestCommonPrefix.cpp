// 超过99.82%
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int si = strs.size();
        string p = "";
        if(si == 0)
            return p;
        int now = 0;
        int mmin = strs[0].size();
        for(int i = 1;i < si;i++) {
            int tmp = strs[i].size();
            if(tmp < mmin)
                mmin = tmp;
        }
        for(int i = 0;i < mmin;i++) {
            for(int j = 1;j < si;j++) {
                if(strs[j][i] != strs[0][i])
                    return p;
            }
            p.insert(now++,strs[0],i,1);
        }
        return p;
    }
};
