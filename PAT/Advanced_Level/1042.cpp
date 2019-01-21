/*
 * ===================================================================
 *
 *       Filename:  1042.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 09时53分50秒
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
const int N = 100;
int a[N],b[N];
int p[N];

void pr(int n)
{
	int x = n/13,y = n%13;
	if(y == 0)	x--,y = 13;
	if(x == 0)	cout << "S";
	if(x == 1)	cout << "H";
	if(x == 2)	cout << "C";
	if(x == 3)	cout << "D";
	if(x == 4)	cout << "J";
	cout << y;
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	for(int i = 1;i < N;i++)	a[i] = i;
	int k;
	cin >> k;
	rep(i,1,54)	cin >> p[i];
	while(k--)
	{
		rep(i,1,54)
		{
			b[p[i]] = a[i];
		}
		rep(i,1,54)	a[i] = b[i];
	}
	rep(i,1,54)
	{
		pr(a[i]);
		if(i != 54)
			cout << " ";
	}

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

