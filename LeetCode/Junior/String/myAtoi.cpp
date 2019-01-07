// 超过15.09%
class Solution {
public:
    int myAtoi(string str) {
        int len = str.size(),i = 0;
        bool f1 = 0,f2 = 0;
        int f = 0;
        long long pr = 0;
        long long mmax = 2147483647;
        long long mmin = -2147483648;
        for(;i < len;i++) {
            if(str[i] == ' ')   continue;
            if(str[i] <= '9' && str[i] >= '0')  break;
            if(str[i] == '-') {
                if(f == 1)  return 0;
                if(i == len-1)  return 0;
                else if(str[i+1] < '0' || str[i+1] > '9')   return 0;
                else f = 1;
                f1 = 1;
                i++;
                break;
            }
            else {
                if(str[i] == '+') {
                    if(f == 1) return 0;
                    if(i == len-1)  return 0;
                    else if(str[i+1] < '0' || str[i+1] > '9')   return 0;
                    else f = 1;
                }
                else {
                    if(str[i] >= '0' && str[i] <= '9') {
                        f2 = 1;
                    }
                    else {
                        if(!f2) return 0; 
                    }
                }
            }
        }
        if(i == len) {
            i = 0;
            while(str[i] < '0' || str[i] > '9')
                i++;
        }
        int cou = 0;
        while(str[i] == '0')    i++;
        for(;i < len;i++) {
            if(cou >= 18)   break;
            if(str[i] >= '0' && str[i] <= '9') {
                pr = pr*10+str[i]-'0';
                cou++;
            }
            else 
                break;
        }
        if(f1) {
            if(pr-1 >= mmax)
                return (int)mmin;
            else
                return (int)pr*(-1);
        }
        else {
            if(pr >= mmax)
                return (int)mmax;
            else 
                return (int)pr;
        }
    }
};
