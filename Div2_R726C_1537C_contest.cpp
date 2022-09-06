#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>height(n);
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        sort(height.begin(),height.end());
        if(n==2)
        {
         cout<<height[0]<<" "<<height[1]<<"\n";
         continue;
        }
        int pos=-1,minv=INT_MAX;
        for(int i=1;i<n;i++)
        {
            if(minv>abs(height[i]-height[i-1]))
            {
                minv=abs(height[i]-height[i-1]);
                pos=i;
            }
        }
        for(int i=pos;i<n;i++)
        {
            cout<<height[i]<<" ";
        }
        for(int i=0;i<pos;i++)
        {
            cout<<height[i]<<" ";
        }
        cout<<endl;

    }
}
