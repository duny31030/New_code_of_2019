// 超过36.05%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        int num = 1,i = 1,sz = nums.size();
        for(;i < sz;i++) {
            if(nums[i] != nums[i-1]) { 
                num++;
                nums[num-1] = nums[i];
            }
        }
        return num;
    }
};
