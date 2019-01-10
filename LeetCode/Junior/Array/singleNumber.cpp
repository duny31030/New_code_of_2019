// 超过97.05%
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sz = nums.size();
        int p = 0;
        for(int i = 0;i < sz;i++)
            p ^= nums[i];
        return p;
    }
};
