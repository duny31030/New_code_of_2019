/*
 * ===================================================================
 *
 *       Filename:  1007.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/08 18时00分34秒
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
const int N = 1e4+100;
int n;
int a[N];
int p[N];
int s1,s2,e1,e2;
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
		cin >> a[i];
	}
	a[1] > 0 ? p[1] = a[1] : p[1] = 0;
	s1 = e1 = 1;
	rep(i,2,n)
	{
		if()
	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

