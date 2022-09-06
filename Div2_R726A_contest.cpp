#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],t,n;
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==n)
            cout<<"0"<<endl;
        if(sum>n)
            cout<<abs(sum-n)<<endl;
        if(sum<n)
            cout<<"1"<<endl;
    }
}
