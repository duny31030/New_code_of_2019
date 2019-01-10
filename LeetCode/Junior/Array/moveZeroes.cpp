// 超过98.94%
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cou = 0;
        vector<int>::iterator it;
        for(it = nums.begin();it != nums.end();) {
            if(*it == 0) {
                cou++;
                nums.erase(it);
            }
            else 
                it++;
        }
        for(int i = 1;i <= cou;i++)
            nums.push_back(0);
    }
};
