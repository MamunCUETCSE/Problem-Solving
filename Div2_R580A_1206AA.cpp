#include<bits/stdc++.h>
#define frloop for(int i=0; i<n; i++)
#define frloop1 for(i=0;i<m;i++)
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,a[1000],b[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    cout<<a[n-1]<<" "<<b[m-1];
}
