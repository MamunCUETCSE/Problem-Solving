#include<bits/stdc++.h>
#include<cstdlib>
#include<stdlib.h>
#define frloop(i,n) for(int i=0; i<n; i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,a[5],b[5],c[5],d[5];
    int sum[5];
    cin>>n;
    frloop(i,n)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    frloop(i,n)
    {
        sum[i]=a[i]+b[i]+c[i]+d[i];
    }
    int cnt=1;
    int temp=sum[0];
    //cout<<sum[0];
    frloop(i,n)
    {
        if(sum[i+1]>temp)cnt++;
    }
if(cnt>1)
    cout<<cnt;
else
    cout<<"1";

}
