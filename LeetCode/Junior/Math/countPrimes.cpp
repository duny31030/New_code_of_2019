// 超过83.37%
class Solution {
public:
    int countPrimes(int n) {
        bool number[n+1];
        int prime[n+1];
        int i,j,count = 0,p = 0;
        memset(number,0,sizeof number);
        for(i = 2;i <= n;i++) {
            if(!number[i])
                prime[count++] = i;
            for(j = 0;j < count;j++) {
                if(i*prime[j] > n)  break;
                number[i*prime[j]] = true;
                if(i%prime[j] == 0) break;
            }
        }
        for(int i = 2;i < n;i++)
            if(!number[i]) {
                // printf("%d\n",i);
                p++;
            }
        return p;
    }
};
