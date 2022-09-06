#include<bits/stdc++.h>
#include<stdlib.h>
#include<map>
#include <cstdio>
#include<math.h>
#define frloop(i,n) for(int i=0; i<n; i++)
#define pb push_back()
typedef long long ll;
using namespace std;
int main()
{
    int n;
    string s[6];
    cin>>n;
    map<string, string>mp;
    mp.insert({"purple", "Power"});
    mp.insert({"green", "Time"});
    mp.insert({"blue", "Space"});
    mp.insert({"red", "Reality"});
    mp.insert({"yellow","Mind"});
    mp.insert({"orange", "Soul"});
    frloop(i,n)
    {
        cin>>s[i];
    }

    frloop(i,n)
    {        for(auto it=mp.begin();it!=mp.end();it++)
           {
            if(s[i]==it->first){
           mp.erase(it->first);
           break;
           }}
    }
    cout<<6-n<<endl;
    fflush(stdout);
    for(auto it=mp.begin();it!=mp.end();it++)
    cout<<it->second<<endl;
    fflush(stdout);
    return 0;
}
