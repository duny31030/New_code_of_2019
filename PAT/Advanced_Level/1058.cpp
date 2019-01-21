/*
 * ===================================================================
 *
 *       Filename:  1058.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/21 10时45分36秒
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
char a[N],b[N];
int t1,t2,t3,t4,t5,t6,tmp;
int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> (a+1) >> (b+1);
	int la = strlen(a+1),lb = strlen(b+1);
	int i = 1;
	for(;a[i] != '.';i++)	t1 = t1*10+(a[i]-'0');
	i++;
	for(;a[i] != '.';i++)	t2 = t2*10+(a[i]-'0');
	i++;
	for(;i <= la;i++)		t3 = t3*10+(a[i]-'0');
	i = 1;
	for(;b[i] != '.';i++)	t4 = t4*10+(b[i]-'0');
	i++;
	for(;b[i] != '.';i++)	t5 = t5*10+(b[i]-'0');
	i++;
	for(;i <= lb;i++)		t6 = t6*10+(b[i]-'0');
	t1 += t4;	t2 += t5;	t3 += t6;
	if(t3 >= 29)	t3 = t3%29,t2++;
	if(t2 >= 17)	t2 %= 17,t1++;
	cout << t1 << "." << t2 << "." << t3;

    fclose(stdin);
    // fclose(stdout);
    return 0;
}

