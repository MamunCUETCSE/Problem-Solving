#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Test,n,a[10000];
    cin>>Test;
    while(Test--)
    {
        cin>>n;
        int cnt=0;
        for(int i=0; i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(int i=1;i<=n;i++)
        {
            if(i<=a[i-1])
                cnt++;}
                cout<<cnt<<endl;
    }
}
