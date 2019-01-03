/*
 *==================================
 *                              
 *  > File Name: 1002.cpp
 *  > Author: duny31030
 *  > Mail: duny31030@126.com 
 *  > Created Time: 四  1/ 3 16:29:21 2019
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
	int n;
	int tmp = 0;
	double tmp2 = 0.0;
	int tot = 0;
	double p[1010] = {0.0000};
    for(int i = 1;i <= 2;i++)
	{
		scanf("%d",&n);
		for(int j = 1;j <= n;j++)
		{
			scanf("%d",&tmp);
			scanf("%lf",&tmp2);
			p[tmp] += tmp2;			
		}
	}
	for(int i = 0;i <= 1000;i++)
		if(p[i] != 0.0)
			tot++;
	printf("%d",tot);
	if(tot == 0)
		return 0;
	for(int i = 1000;i >= 0;i--)
	{
		if(p[i] != 0.0)
		{
			printf(" %d %0.1f",i,p[i]);
		}
	}
	
    fclose(stdin);
    //fclose(stdout);
    return 0;
}     
