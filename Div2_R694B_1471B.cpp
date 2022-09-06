#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {  int temp;
            cin>>temp;
           v.push_back(make_pair(temp,1));
        }
        for(int i=0;i<(int)v.size();i++)
        {
            if(v[i].first%x !=0)
            { break;
            }
             v.push_back(make_pair(v[i].first/x,v[i].second*x));
        }
        long long sum;
        for(pair<int,int>p: v)
        {
            sum+=(long long)p.first*p.second;
        }
        cout<<sum;
      
    }
}