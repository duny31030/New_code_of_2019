// 超过99.66%
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int sz = nums.size();
        if(k == 0 || k == sz)
            return ;
        if(k > sz)
            k %= sz;
        vector<int>::iterator it1,it2,it3;
        it1 = nums.begin();
        it3 = nums.end();
        it2 = it3 - k;
        nums.insert(it1,it2,it3);
        it3 = nums.end();
        it2 = it3-k;
        nums.erase(it2,it3);
    }
};
