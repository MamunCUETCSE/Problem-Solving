#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#define frloop(i,n) for(int i=0;i<n; i++)
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,s[1000],c[1000];
    int k;
    cin>>n;
        frloop(i,n)
        {
            cin>>s[i]>>c[i];
        }
    cin>>k;
    int cnt=0;
    frloop(i,n)
    {
        if(c[i]>=k)
            cnt++;
    }
    cout<<cnt;
}
