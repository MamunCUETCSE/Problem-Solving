#include<bits/stdc++.h>
#define frlp(m) for(int i=0;i<m;i++)
using namespace std;
const int d=-999999999;
int main()
{
    int n,arr[3];int dp[4005];
    cin>>n;
    frlp(3)
    {
        cin>>arr[i];
    }
    frlp(4005)
    {
        dp[i]=d;
    }
    dp[0]=0;
    for(int i=0;i<3;i++)
    {
        for(int j=arr[i];j<=n;j++)
        {
            dp[j]=max(dp[j],dp[j-arr[i]]+1);
        }
    }
    cout<<dp[n];

}
