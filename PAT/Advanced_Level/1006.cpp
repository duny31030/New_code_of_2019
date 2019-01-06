/*
 * ===================================================================
 *
 *       Filename:  1006.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/06 10时17分55秒
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
const int N = 10010;

struct sign 
{	
	char name[20];
	int in;
	int out;
}p[N];

bool cmp1(const struct sign x,const struct sign y)
{
	return x.in < y.in;
}

bool cmp2(const struct sign x,const struct sign y)
{
	return x.out > y.out;
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
	cin >> n;
	char in[20];
	char out[20];
	rep(i,1,n)
	{
		cin >> p[i].name >> in >> out;
		int tmp1 = (in[0]-'0')*10+(in[1]-'0');
		int tmp2 = (in[3]-'0')*10+(in[4]-'0');
		int tmp3 = (in[6]-'0')*10+(in[7]-'0');
		tmp1 = tmp1*12*60;
		tmp1 += tmp2*60;
		tmp1 += tmp3;
		p[i].in = tmp1;
		tmp1 = (out[0]-'0')*10+(out[1]-'0');
		tmp2 = (out[3]-'0')*10+(out[4]-'0');
		tmp3 = (out[6]-'0')*10+(out[7]-'0');
		tmp1 = tmp1*12*60;
		tmp1 += tmp2*60;
		tmp1 += tmp3;
		p[i].out = tmp1;
	}
	sort(p+1,p+1+n,cmp1);
	cout << p[1].name;
	sort(p+1,p+1+n,cmp2);
	cout << " " << p[1].name;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

