#include<bits/stdc++.h>
#define ll long long
#define frl(i,n) for(ll i=0;i<n;i++)
#define Sz(s)    s.size()
using namespace std;
int main()
{
    ll n;
    string s;
    cin>>n>>s;
    int cnt =0,cnt_1 = 0;
    frl(i,Sz(s))
    {
        if(s[i]=='n')cnt++;
        else if(s[i]=='z')cnt_1++;
    }
    frl(i,cnt)
    {
        cout<<"1"<<" ";
    }
    frl(i,cnt_1)
    {
        cout<<"0"<<" ";
    }

return 0;
}
