// 超过99.96%
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sz = prices.size(),p = 0;
        bool buy = false;
        for(int i = 0;i < sz;i++) {
            if(i == 0 || i == sz-1) {
                if(i == 0) {
                    if(prices[i+1] > prices[i]) {
                        p -= prices[i];
                        buy = 1;
                    }
                }
                else {
                    if(buy)
                        p += prices[i];
                }
            }
            else {
                if(buy) {
                    if(prices[i] > prices[i+1]) {
                        buy = 0;
                        p += prices[i];
                    }
                }
                else {
                    if(prices[i] < prices[i+1]) {
                        buy = 1;
                        p -= prices[i];
                    }
                }
            }
        }
        return p;
    }
};
