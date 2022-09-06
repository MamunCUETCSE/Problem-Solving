#include 	         <bits/stdc++.h>
using   namespace    std;
#define fileread     freopen("input.txt", "r", stdin);
#define ll           long long
#define ld           long double
#define I            int
#define d            double
#define pb           push_back
#define inarray(arr,n) for(ll i=0;i<n;i++ )cin>>arr[i]
#define fasti_o      ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define sortv(x)     x.begin(),x.end()
#define sortarr(n)   arr,arr+n;
#define mp           make_pair
#define f            first
#define s            second
#define ub           upper_bound
#define lb           lower_bound
#define say_y        cout<<"YES"<<"\n"
#define say_n        cout<<"NO"<<"\n"
#define endl         cout<<"\n"
#define for0(n)      for(ll i=0;i<n;i++)
#define for1(n)      for(ll i=1;i<n;i++)
#define co(x)        cout << x << " ";
#define TC           ll T;cin>>T;while(T--)
#define tc           ll t;cin>>t;while(t--)
#define fr(i,s,e)    for(int i=s;i<e;i++)
#define fe(x,v)      for(auto& x : v)
typedef vector<ll>   vll;
typedef vector<I>    vi;
typedef pair<ll,ll>  pairll;
typedef pair<I,I>    pairi;
typedef map<ll,ll>   mapll;
const int MAXN = 1e5 + 10;
const long long mod=1000000007;
 
bool comp(pairll a,pairll b){
	return a.f<b.f;
}
const ll con=200005;
vll adj[con];
const int N = 10000000;
ll ans=0;
ll n,m;
int arr[MAXN];
int brr[MAXN]; 
int main(){  
	fasti_o;
	tc{
    	vi a(2), b(2), f(2);
        cin >> a[0] >> a[1];
        cin >> b[0] >> b[1];
        cin >> f[0] >> f[1];
        int ans = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        if ((a[0] == b[0] && a[0] == f[0] && min(a[1], b[1]) < f[1] && f[1] < max(a[1], b[1]))
                || (a[1] == b[1] && a[1] == f[1] && min(a[0], b[0]) < f[0] && f[0] < max(a[0], b[0])))
            ans += 2;
        cout << ans; endl;
	}
	return 0;
}  