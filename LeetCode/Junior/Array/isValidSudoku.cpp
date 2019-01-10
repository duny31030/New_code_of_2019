// 超过83.01%
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<int,int> m,m1,m2;
        // 枚举9个3x3的小宫
        for(int i = 0;i < 9;i += 3) {
            for(int j = 0;j < 9;j += 3) {
                for(int k = 0;k < 3;k++) {
                    for(int l = 0;l < 3;l++) {
                        if(board[i+k][j+l] != '.') {
                            m[board[i+k][j+l]-'0']++;
                            if(m[board[i+k][j+l]-'0'] > 1)
                                return false;
                        }
                    }
                }
                m.clear();
            }
        }
        // 枚举大的9x9
        for(int i = 0;i < 9;i++) {
            for(int j = 0;j < 9;j++) {
                if(board[i][j] != '.') {
                    m1[board[i][j]-'0']++;
                    if(m1[board[i][j]-'0'] > 1)
                        return false;
                }
            }
            m1.clear();
            for(int j = 0;j < 9;j++) {
                if(board[j][i] != '.') {
                    m2[board[j][i]-'0']++;
                    if(m2[board[j][i]-'0'] > 1)
                        return false;
                }
            }
            m2.clear();
        }
        return true;
    }
};

