#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=2){
         vector<int>v;
         vector<int>vi;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        vi.push_back(v.back());
        for(int i=1;i<n;i++)
        {
            vi.push_back(i);
        }
        vector<int>::iterator it;
        for(it=vi.begin();it!=vi.end();it++)
        {
            cout<<*it<<" ";
        }
        }
        cout<<endl;
    }
}
