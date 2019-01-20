/*
 * ===================================================================
 *
 *       Filename:  1041.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 22时53分56秒
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
int m[N];
int n;
int a[N];
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	int pr = -99;
	cin >> n;
	rep(i,1,n)
	{
		cin >> a[i];
		m[a[i]]++;
	}
	rep(i,1,n)
	{
		if(m[a[i]] == 1)
		{
			pr = a[i];
			break;
		}
	}
	if(pr != -99)
		cout << pr;
	else 
		cout << "None";
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

