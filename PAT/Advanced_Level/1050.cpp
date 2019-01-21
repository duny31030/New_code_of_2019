/*
 * ===================================================================
 *
 *       Filename:  1050.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 10时20分26秒
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
const int N = 1e4+100;
map<char,bool> m;
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif

    string a,b;
	getline(cin,a);
	int len = a.length();
	// cin >> b;
	getline(cin,b);
	int len2 = b.length();
	for(int i = 0;i < len2;i++)
	{
		m[b[i]] = true;
	}
	for(int i = 0;i < len;i++)
	{
		if(m[a[i]])	continue;
		cout << a[i];
	}

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

