/*
 * ===================================================================
 *
 *       Filename:  1019.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 21时20分07秒
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

int a[40];
int top = 1;
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif

    int n,p;
	cin >> n >> p;
	while(n)
	{
		a[top++] = n%p;
		n /= p;
	}
	bool flag = 1;
	for(int i = 1;i <= top/2;i++)
	{
		if(a[i] != a[top-i])
		{
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;

	for(int i = top-1;i >= 1;i--)
	{
		cout << a[i];
		if(i != 1)
			cout << " ";
	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

