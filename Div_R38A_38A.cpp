#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    int a,b,sum=0;
    cin>>a>>b;
    for(int i=a;i<b;i++)
    {
        sum=sum+arr[i-1];
    }
    cout<<sum;
}
