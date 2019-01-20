/*
 * ===================================================================
 *
 *       Filename:  1031.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 15时13分03秒
 *
 *         Author:  duny31030 , duny31030@126.com
 *   Organization:  duny31030.top
 *
 * ===================================================================
 */
#include <bits/stdc++.h>
using namespace std;
#define clr(a, x) memset(a, x, sizeof(a))
#define rep(i,a,n) for(int i=a;i<=n;i++)
#define pre(i,a,n) for(int i=n;i>=a;i--)
#define ll long long
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const double eps = 1e-6;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 110;
char a[N];

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	int n1,n2,n3;
	scanf("%s",a+1);
	// printf("%s\n",a+1);
	int len = strlen(a+1)+2;
	n1 = n2 = n3 = len/3;
	if(len%3)
	{
		if(len%3 == 1)
		{
			n2++;
		}
		else 
		{
			if(n2 >= 4)
			{
				// n1++;	n3++;
				n2 += 2;
			}
			else 
			{
				n2 += 2;
			}
		}
	}
	n2 -= 2;
	// printf("%d %d %d %d\n",len-2,n1,n2+2,n3);
	for(int i = 1;i <= n1;i++)
	{	
		printf("%c",a[i]);
		if(i != n1)
			for(int j = 1;j <= n2;j++)
				printf(" ");
		else 
			for(int j = n1+1;j <= n1+n2;j++)
				printf("%c",a[j]);
		printf("%c\n",a[len-i-1]);
	}
	
	fclose(stdin);
    // fclose(stdout);
    return 0;
}

