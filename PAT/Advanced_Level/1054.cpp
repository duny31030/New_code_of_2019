/*
 * ===================================================================
 *
 *       Filename:  1054.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 10时33分11秒
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
int n,m1,tmp,maxn;
map<int,int> m;
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> n >> m1;
	rep(i,1,n)
	{
		rep(i,1,m1)
		{
			cin >> tmp;
			m[tmp]++;
		}
	}
	maxn = 0,tmp = 0;
    map<int,int>::iterator it;
	for(it = m.begin();it != m.end();it++)
	{
		if(it->second > tmp)
		{
			tmp = it->second;
			maxn = it->first;
		}
	}
	cout << maxn << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

