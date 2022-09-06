#include<bits/stdc++.h>
#define ll long long
#define frloop(i,n) for(ll i=0; i<n; i++)
#define Sizestr(s) s.size()
using namespace std;
int main()
{
    ll n;
    string s;
    cin>>n>>s;
    int cnt = 0,cntt =0;
    frloop(i,Sizestr(s))
    {
        if(s[i]=='S' && s[i+1]=='F')cnt++;
        else if(s[i]=='F' && s[i+1]=='S') cntt++;
    }
    if(cnt>cntt)cout<<"YES";
    else cout<<"NO";
}
