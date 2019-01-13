/*
 * ===================================================================
 *
 *       Filename:  1065.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/13 11时48分37秒
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


void t(int i)
{
	printf("Case #%d: true\n",i);
}

void f(int i)
{
	printf("Case #%d: false\n",i);
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif

    ll a,b,c,d;
	int n;
	cin >> n;
	rep(i,1,n)
	{
		cin >> a >> b >> c;
		d = a+b;
		if(a > 0 && b > 0 && d < 0)	t(i);
		else 
		{
			if(a < 0 && b < 0 && d >= 0)	f(i);
			else 
			{
				if(d > c)	t(i);
				else		f(i);
			}
		}
	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

