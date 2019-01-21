/*
 * ===================================================================
 *
 *       Filename:  1069.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 11时03分46秒
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
int a,b,sum;
int c[6];

void pr2(int n)
{
	if(n == 0)	cout << "0000";
	else 
		if(n < 10)	cout << "000" << n;
		else if(n < 100)	cout << "00" << n;
			else if(n < 1000)	cout << "0" << n;
				else cout << n;
}

void pr(int a,int b,int c)
{
	pr2(a);
	cout << " - ";
	pr2(b);
	cout << " = ";
	pr2(c);
	cout << endl;
}

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> sum;
	c[1] = sum/1000;	c[2] = sum/100%10;	
	c[3] = sum%100/10;	c[4] = sum%10;
	sort(c+1,c+5);
	if(c[1] == c[4])
	{
		pr(sum,sum,0);
		return 0;
	}
	while(1)
	{
		c[1] = sum/1000;	c[2] = sum/100%10;	
		c[3] = sum%100/10;	c[4] = sum%10;
		sort(c+1,c+5);
		a = c[4]*1000+c[3]*100+c[2]*10+c[1];
		b = c[1]*1000+c[2]*100+c[3]*10+c[4];
		sum = a-b;
		pr(a,b,sum);
		if(sum == 0 || sum == 6174)	return 0;

	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

