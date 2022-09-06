#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<vector>
#include<map>
#define frloop(i,n) for(int i=0; i<n;i++)
#define floop(j,m) for(int j=0; i<m; i++)
typedef long long ll;
using namespace std;
int main(){

ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,m;
cin>>n>>m;
int key[100],finger[1000];
frloop(i,n)
{
    cin>>key[i];
}
frloop(i,m)
{
    cin>>finger[i];
}
int cnt=0;
for(int i=0; i<n; i++)
{
    for(int j=0;j<m;j++)
    {
        if(key[i]==finger[j]){
            cout<<key[i]<<" ";
            cnt++;
            break;
        }

    }
    if(cnt==m)
        break;
}
}
