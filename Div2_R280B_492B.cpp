#include 	         <bits/stdc++.h>
using   namespace    std;
#define fileread     freopen("input.txt", "r", stdin);
#define ll           long long
#define ld           long double
#define I            int
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
ll n,l;
 
void solve(){
	cin>>n>>l;
	vll v(n);
    for0(n){
        cin>>v[i];
    }
    sort(sortv(v));
    double ans=v[0];
    for1(n){
        ans=max(ans,double(v[i]-v[i-1])/2);
    }
    ans=max(ans,double(l-v[n-1]));
    cout<<fixed<<setprecision(10);
    cout<<ans;
	
}
 
signed main(){  
	fasti_o;
	ll t=1;
	while(t--){
    	solve();
		endl;
	}
	return 0;
}  