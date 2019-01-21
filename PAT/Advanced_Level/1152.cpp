/*
 * ===================================================================
 *
 *       Filename:  1152.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 22时05分09秒
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
const int N = 1100;
// char a[N];
int len,l;
string a;
bool isprime(int n)
{
	if(n == 0 || n == 1)	return false;
	for(int i = 2;i*i <= n;i++)
	{
		if(n%i == 0)	return false;
	}
	return true;
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> len >> l;
	cin >> a;
	int tmp = 0;
	/*
	int mod = 1;
	for(int i = 1;i < l;i++)
	{
		tmp = tmp*10+(a[i]-'0');
		mod *= 10;
	}
	for(int i = l;i <= len;i++)
	{
		tmp = tmp*10+(a[i]-'0');
		if(isprime(tmp))
		{
			cout << tmp;
			return 0;
		}
		tmp %= mod;
	}
	*/

	for(int i = 0;i <= len-l;i++)
	{
		string b = a.substr(i,l);
		tmp = stoi(b);
		if(isprime(tmp))
		{
			cout << tmp;
			return 0;
		}
	}

	cout << "404";
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

