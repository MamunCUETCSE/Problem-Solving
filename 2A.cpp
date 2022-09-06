#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n,i;
    string s[1000];
    map<string, int>var;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i]>>a[i];
        var[s[i]]+=a[i];//maping the map with kew and values

    }
    int maximum=0;
    for(i=0;i<n;i++)
    {
        maximum = max(var[s[i]],maximum);//find the maximum value from the mapped key
    }
    map<string, int>var1;
    string winner;
    for(i=0;i<n;i++)
    {
        var1[s[i]]+=a[i];
        if(var1[s[i]]>=maximum && var[s[i]]==maximum)
        {
            winner=s[i];
            break;
        }
    }
    cout<<winner<<endl;

return 0;
}
