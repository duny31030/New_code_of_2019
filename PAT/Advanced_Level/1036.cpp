/*
 * ===================================================================
 *
 *       Filename:  1036.cpp
 *
 *           Link:  
 *
 *        Created:  2019/01/20 19时31分50秒
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

int main()
{
    ios
    #ifdef ONLINE_JUDGE
    #else
        freopen("in.txt","r",stdin);
        // freopen("out.txt","w:",stdout);
    #endif
	bool f = 1,m = 1;
	int n,len;
	cin >> n;
	char name[20],fm,ch[20],sc[20];
	char p1name[20],p1ch[20];
	char p2name[20],p2ch[20];
	int p1,p2,tmp;
	for(int i = 1;i <= n;i++)
	{	
		cin >> name >> fm >> ch >> sc;
		len = strlen(sc);
    	tmp = 0;
    	for(int i = 0;i < len;i++)
    		tmp = tmp*10+sc[i]-'0';
    	if(fm == 'M')	// Male
    	{
    		if(m)
    		{
    			m = 0;
    			strcpy(p2name,name);
    			strcpy(p2ch,ch);
    			p2 = tmp;
    		}
    		else 
    		{
    			if(tmp < p2)
    			{
    				strcpy(p2name,name);
    				strcpy(p2ch,ch);
    				p2 = tmp;
    			}
    		}
    	}
    	else			// Female 
    	{
    		if(f)
    		{
    			f = 0;
    			strcpy(p1name,name);
    			strcpy(p1ch,ch);
    			p1 = tmp;
    		}
    		else 
    		{
    			if(tmp > p1)
    			{
    				strcpy(p1name,name);
    				strcpy(p1ch,ch);
    				p1 = tmp;
    			}
    		}
    	}
	}
	if(!f)
		cout << p1name << " " << p1ch << endl;
	else 
		cout << "Absent" << endl;
	if(!m)
		cout << p2name << " " << p2ch << endl;
	else 
		cout << "Absent" << endl;
	if(f || m)
		cout << "NA" << endl;
	else 
		cout << p1-p2 << endl;
    fclose(stdin);
    // fclose(stdout);
    return 0;
}

