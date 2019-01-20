/*
 * ===================================================================
 *
 *       Filename:  1023.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 21时33分03秒
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
const int N = 30;
char a[N];
int p[N];
int f[N];
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> (a+1);
    int len = strlen(a+1);
	for(int i = 1;i <= len;i++)
	{
		p[i] = (a[i]-'0');
		f[p[i]]++;
	}

	int tmp;
	for(int i = 1;i <= len;i++)
	{	
		tmp = p[i]*2;
		if(tmp >= 10)
		{
			p[i-1] += 1;
			p[i] = tmp%10;
		}
		else 
			p[i] = tmp;
	}

	for(int i = len;i >= 1;i--)
	{
		if(p[i] >= 10)
		{
			tmp = p[i];
			p[i-1] += 1;
			p[i] = tmp%10;
		}
	}

	for(int i = 0;i <= len;i++)
	{
		if(i == 0 && p[0] == 0)
			continue;
		f[p[i]]--;
	}
	bool fl = 1;
	for(int i = 0;i <= 9;i++)
		if(f[i] != 0)
		{
			fl = 0;
			break;
		}
	if(fl)
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;  
	if(p[0])
		cout << p[0];
	for(int i = 1;i <= len;i++)
	{
		cout << p[i];
	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

