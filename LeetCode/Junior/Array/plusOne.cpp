// 超过100.00%
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz = digits.size();
        sz--;
        bool flag = 1;
        while(flag && sz >= 0) {
            if(digits[sz] == 9) {
                digits[sz] = 0;
            }
            else {
                digits[sz] += 1;
                flag = 0;
            }
            sz--;
        }
        if(flag)
            digits.insert(digits.begin(),1);
        return digits;
    }
};
