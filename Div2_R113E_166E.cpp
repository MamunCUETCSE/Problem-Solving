#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
const  int maxv=1e7+5;
const  int mod=1e9+7;
typedef long long ll;
int main()
{
    ll dp[maxv];
    int n;
    cin>>n;
    dp[1]=0;
    dp[2]=3;
    for(int i=3;i<=n;i++)
    {
        dp[i]=2*dp[i-1]+3*dp[i-2];
        dp[i]%=mod;
    }
    cout<<dp[n]<<"\n";

}
