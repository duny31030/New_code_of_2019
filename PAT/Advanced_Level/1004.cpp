/*
 * ===================================================================
 *
 *       Filename:  1004.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/04 20时42分35秒
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
const int N = 110;

bool b[N];
int f[N];
int c[N];


int getdeep(int i)
{
	if(f[i] == 0)
		return 1;
	return getdeep(f[i])+1;
}

void init()
{
	rep(i,0,N-1)	b[i] = 1;
	clr(f,0);
	clr(c,0);
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	int n,m,t1,t2,co;
	int mmax = 0;
	while(cin >> n >> m)
	{
		mmax = 0;
		init();
		rep(i,1,m)
		{
			cin >> t1 >> co;
			b[t1] = 0;
			rep(j,1,co)
			{
				cin >> t2;
				f[t2] = t1;
			}
		}
		rep(i,1,n)
		{
			if(b[i])
			{
				int deep = getdeep(i);
				c[deep]++;
				mmax = max(mmax,deep);
			}
		}
		rep(i,1,mmax)
		{
			cout << c[i];
			if(i == mmax)
				cout << endl;
			else 
				cout << " ";
		}
	}

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

