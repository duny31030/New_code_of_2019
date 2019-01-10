// 超过25.78%
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int sz = matrix[0].size();
        if(sz == 1)
            return ;
        int tR = 0,tC = 0;
        int dR = sz-1,dC = sz-1;
        while(tR < dR) {
            int times = dC-tC;
            int tmp;
            for(int i = 0;i < times;i++) {
                tmp = matrix[tR][tC+i];
                matrix[tR][tC+i] = matrix[dR-i][tC];
                matrix[dR-i][tC] = matrix[dR][dC-i];
                matrix[dR][dC-i] = matrix[tR+i][dC];
                matrix[tR+i][dC] = tmp;
            }
            tR++,tC++,dR--,dC--;
        }
        return ;
    }
};

