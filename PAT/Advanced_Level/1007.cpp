/*
 * ===================================================================
 *
 *       Filename:  1007.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/11 11时19分04秒
 *
 *         Author:  duny31030 , duny31030@126.com
 *   Organization:  QLU_浪在ACM
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
const int N = 100010;

int a[N];
int p[N];
int mmax = -INF;
int s1 = -1,s2 = -1;
int e = -1;

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	
	int n;
	cin >> n;
	rep(i,1,n)
	{
		cin >> a[i];
	}
	rep(i,1,n)
	{
		if(a[i]+p[i-1] >= 0)
		{
			p[i] = a[i]+p[i-1];
			if(a[i]+p[i-1] <= a[i])
			{
				p[i] = a[i];
				s1 = i;
			}
		}
		else 
		{
			p[i] = a[i];
			s1 = i;
		}
		if(p[i] > mmax)
		{
			mmax = p[i];
			s2 = s1;
			e = i;
		}
	}
	if(mmax < 0)
		cout << "0 " << a[1] << " " << a[n] << endl;
	else 
		cout << mmax << " " << a[s2] << " " << a[e] << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

