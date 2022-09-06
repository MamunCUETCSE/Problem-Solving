#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<vector>
#include<map>
#define frloop(i,n) for(int i=0; i<n;i++)
#define floop(j,m) for(int j=0; i<m; i++)
typedef long long ll;
using namespace std;
int main()
{
ios::sync_with_stdio(false);
cin.tie(0),cout.tie(0);
//ll n,a[1000000];
int n,a[100000];
cin>>n;
frloop(i,n)
{
    cin>>a[i];
}
sort(a,a+n);
n=n/2;
if(n%2)
    cout<<a[n];
else
    cout<<a[n+1];
}

