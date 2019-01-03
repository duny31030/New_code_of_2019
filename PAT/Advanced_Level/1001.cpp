/*
 *==================================
 *                              
 *  > File Name: 1001.cpp
 *  > Author: duny31030
 *  > Mail: duny31030@126.com 
 *  > Created Time: 四  1/ 3 16:12:37 2019
 *  > Link:
 *                              
 *==================================
 */
     
#include<bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define pre(i,a,n) for(int i=n;i>=a;i--)
#define ll long long
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
 
 
int main()
{     
    ios
#ifdef ONLINE_JUDGE
#else
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout); 
#endif
    int a,b;
	int len = 1;
	int p[100];
	scanf("%d %d",&a,&b);
	a += b;
	if(a == 0)
	{
		printf("0\n");
		return 0;
	}
	else 
	{
		bool flag = 0;
		if(a < 0)
		{
			flag = 1;
			a = -a;
		}
		while(a)
		{
			p[len++] = a%10;
			a /= 10;
		}

		if(flag)
			printf("-");
		len -= 1;
		printf("%d",p[len]);
		for(int i = len-1;i >= 1;i--)
		{
			if(i%3 == 0)
				printf(",");
			printf("%d",p[i]);
		}
		printf("\n");
	}
    fclose(stdin);
    //fclose(stdout);
    return 0;
}     
