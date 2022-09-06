#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,total,ans=1<<30;
    string s;
    map<char, int>mp;
    cin>>n>>m>>s;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    for(char c='A'; c<'A'+m; c++)
    {
        ans=min(mp[c],ans);
    }
    total=ans*m;
    cout<<total;
}
