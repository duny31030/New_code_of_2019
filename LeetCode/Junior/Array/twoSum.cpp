// 超过98.94%
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re(2);
        map<int,int> m;
        int sz = nums.size();
        for(int i = 1;i < sz;++i)
            m[nums[i]] = i;
        for(int i = 0;i < sz-1;++i) {
            if(m[target-nums[i]] > 0 && m[target-nums[i]]!= i) {
                re[0] = i;
                re[1] = m[target-nums[i]];
                return re;
            }
        }
        return re;
    }    
};
