// 超过97.56%
class Solution {
public:
    int reverse(int x) {
        long long p1 = 0,p2 = x;
        long long x1 = -2147483648;
        long long x2 = 2147483647;
        bool flag = 0;
        if(p2 < 0)
            flag = 1,p2 = -p2;
        while(p2) {
            p1 = p1*10+p2%10;
            p2 /= 10;
        }
        if(flag) {
            p1 = -1ll*p1;
            if(p1 < x1)
                return 0;
            else 
                return p1;
        }
        else {
            if(p1 > x2)
                return 0;
            else 
                return p1;
        }

    }
};
