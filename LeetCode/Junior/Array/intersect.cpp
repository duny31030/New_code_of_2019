// 超过100%
class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
        vector<int> v;
        vector<int>::iterator pos1,pos2;
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        pos1 = num1.begin();    pos2 = num2.begin();
        while(pos1 != num1.end() && pos2 != num2.end()) {
            if(*pos1 == *pos2) {
                v.push_back(*pos1);
                pos1++;
                pos2++;
            }
            else {
                if(*pos1 > *pos2) {
                    pos2++;   
                }
                else {
                    pos1++;
                }
            }
        }
        return v;
    }
};
