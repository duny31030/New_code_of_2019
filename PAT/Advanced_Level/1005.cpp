/*
 * ===================================================================
 *
 *       Filename:  1005.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/05 21时31分23秒
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
char a[N];
char p[N];
ll sum = 0;
string pr[20];

void init()
{
	pr[0] = "zero";	pr[1] = "one";	pr[2] = "two";	pr[3] = "three";
	pr[4] = "four";	pr[5] = "five";	pr[6] = "six";	pr[7] = "seven";
	pr[8] = "eight";	pr[9] = "nine";
}
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	init();
	cin >> a;
	int len = strlen(a);
	rep(i,0,len-1)
	{
		sum += (a[i]-'0');
	}
	if(sum == 0)
	{
		cout << "zero" << endl;
		return 0;
	}
	int len2 = 0;
	while(sum)
	{
		p[len2++] = sum%10;
		sum /= 10;
	}
	len2--;
	pre(i,0,len2)
	{
		int tmp = p[i];
		cout << pr[tmp];
		if(i > 0)
			cout << " ";
	}
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

