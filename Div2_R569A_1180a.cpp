#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int Size=2e5+7;
int main()
{

    int n;
    ll a[Size];
    a[0]=1;
    while(cin>>n)
    {
        int sum=0;
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+2;
        }
        if(n==1)
            cout<<"1"<<endl;
        else{
        for(int i=0;i<n-1;i++)
        {
            sum +=a[i];
        }
        cout<<(2*sum)+a[n-1]<<endl;
        }
    }
    return 0;
}
