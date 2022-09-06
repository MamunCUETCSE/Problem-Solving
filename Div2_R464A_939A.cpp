#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[5005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    bool love = false;
    for(int i=1;i<=n;i++)
    {
        if(arr[arr[arr[i]]]==i)
           {
            love =true;
        break;}
    }
    if(love)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";

}
