// 超过56.12%
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int sz = nums.size();
        sort(nums.begin(),nums.end());
        int m = unique(nums.begin(),nums.end())-nums.begin();
        if(m == sz)
            return false;
        return true;
    }
};
