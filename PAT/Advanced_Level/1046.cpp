/*
 * ===================================================================
 *
 *       Filename:  1046.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 10时14分02秒
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
const int N = 1e5+100;
ll a[N];
int n,m,x,y;
ll sum;
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> n;
	rep(i,1,n)
	{
		cin >> a[i+1];
		sum += a[i+1];
		a[i+1] += a[i];
	}
    cin >> m;
	rep(i,1,m)
	{
		cin >> x >> y;
		if(x > y)	swap(x,y);
		cout << min(a[y]-a[x],sum-a[y]+a[x]) << endl;;
	}
	
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

