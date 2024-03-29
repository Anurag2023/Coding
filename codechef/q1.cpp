//Utkarsh.25dec
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define vl vector <ll>
#define all(c) (c).begin(),(c).end()
using namespace std;
ll power(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll modInverse(ll a){return power(a,mod-2);}
const int N=1000023;
bool vis[N];
vector <int> adj[N];
int isprime[N];
long long readInt(long long l,long long r,char endd){
    long long x=0;
    int cnt=0;
    int fi=-1;
    bool is_neg=false;
    while(true){
        char g=getchar();
        if(g=='-'){
            assert(fi==-1);
            is_neg=true;
            continue;
        }
        if('0'<=g && g<='9'){
            x*=10;
            x+=g-'0';
            if(cnt==0){
                fi=g-'0';
            }
            cnt++;
            assert(fi!=0 || cnt==1);
            assert(fi!=0 || is_neg==false);
 
            assert(!(cnt>19 || ( cnt==19 && fi>1) ));
        } else if(g==endd){
            if(is_neg){
                x= -x;
            }
 
            if(!(l <= x && x <= r))
            {
                cerr << l << ' ' << r << ' ' << x << '\n';
                assert(1 == 0);
            }
 
            return x;
        } else {
            assert(false);
        }
    }
}
string readString(int l,int r,char endd){
    string ret="";
    int cnt=0;
    while(true){
        char g=getchar();
        assert(g!=-1);
        if(g==endd){
            break;
        }
        cnt++;
        ret+=g;
    }
    assert(l<=cnt && cnt<=r);
    return ret;
}
long long readIntSp(long long l,long long r){
    return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
    return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
    return readString(l,r,'\n');
}
string readStringSp(int l,int r){
    return readString(l,r,' ');
}
void solve()
{
    int A=readInt(2,1000000,' ');
    int B=readInt(2,1000000,'\n');
    int x=A;
    int y=B;
    vector <int> p,q;
    while(x>1)
    {
    	int tmp=isprime[x];
    	while((x%tmp)==0)
    		x/=tmp;
    	p.pb(tmp);
    }
    while(y>1)
    {
    	int tmp=isprime[y];
    	while((y%tmp)==0)
    		y/=tmp;
    	q.pb(tmp);
    }
    sort(all(p));
    sort(all(q));
    if(p.size()!=q.size())
    {
    	cout<<"NO\n";
    	return;
    }
    vector <pair<int,int>> v;
    for(int i=0;i<p.size();i++)
    {
    	if(p[i]!=q[i])
    	{
    		cout<<"NO\n";
    		return;
    	}
    	int c1=0,c2=0;
    	while((A%p[i])==0)
    	{
    		c1++;
    		A/=p[i];
    	}
    	while((B%q[i])==0)
    	{
    		c2++;
    		B/=q[i];
    	}
    	int g=(__gcd(c1,c2));
    	c1/=g;
    	c2/=g;
    	v.pb(mp(c1,c2));
    }
    for(int i=0;i<v.size();i++)
    {
    	if(v[i]!=v[0])
    	{
    		cout<<"NO\n";
    		return;
    	}
    }
    cout<<"YES\n";
 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int T=readInt(1,100000,'\n');
    for(int i=1;i<N;i++)
    	isprime[i]=i;
    for(int i=2;i<N;i++)
    {
    	if(isprime[i]!=i)
    		continue;
    	for(int j=i;j<N;j+=i)
    		isprime[j]=i;
    }
    while(T--)
        solve();
    assert(getchar()==-1);
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
}