/*
 * ===================================================================
 *
 *       Filename:  1027.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 22时29分06秒
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

void pr(int n)
{
	if(n < 10)
		cout << n;
	else 
	{
		if(n == 10)
			cout << "A";
		if(n == 11)
			cout << "B";
		if(n == 12)
			cout << "C";
	}
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	int n;
	cout << "#";
	rep(i,1,3)
	{
		cin >> n;
		pr(n/13);
		pr(n%13);
	}

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

