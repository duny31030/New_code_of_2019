/*
 * ===================================================================
 *
 *       Filename:  1011.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/12 17时00分07秒
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

double a1,a2,a3,am;
double b1,b2,b3,bm;
double c1,c2,c3,cm;
double p;

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	cin >> c1 >> c2 >> c3;
	am = max(a1,a2);	am = max(am,a3);
	bm = max(b1,b2);	bm = max(bm,b3);
	cm = max(c1,c2);	cm = max(cm,c3);
	if(a1 == am)	cout << "W ";
	if(a2 == am)	cout << "T ";
	if(a3 == am)	cout << "L ";
	if(b1 == bm)	cout << "W ";
	if(b2 == bm)	cout << "T ";
	if(b3 == bm)	cout << "L ";
	if(c1 == cm)	cout << "W ";
	if(c2 == cm)	cout << "T ";
	if(c3 == cm)	cout << "L ";
	am = am*bm*cm*0.65;
	am -= 1;
	am *= 2;
	printf("%.2f",am);
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

