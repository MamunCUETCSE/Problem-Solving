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
#define tc           I t;cin>>t;while(t--)
#define fr(i,s,n)    for(int i=s;i<n;i++)
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



int main(){
	fasti_o;
	tc{
    	I n,sv1,sv2;
        ll ans=0;
        cin>>n;
        int arr[n],arr1[n];
        cin>>arr[0];
        sv1=arr[0];
        fr(i,1,n)
        {
            cin>>arr[i];
            if(arr[i]<sv1)
            {
                sv1=arr[i];
            }

        }
         
         cin>>arr1[0];
         sv2=arr1[0];
        fr(i,1,n)
        {
            cin>>arr1[i];
            if(arr1[i]<sv2)
            {
                sv2=arr1[i];
            }
        }
        fr(i,0,n)
        {
            ans+=max(arr[i]-sv1,arr1[i]-sv2);
        }
        cout<<ans; endl;
	}
	return 0;
}
