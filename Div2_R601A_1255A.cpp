#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,diff;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>a>>b;
        diff =abs(a-b);
        if(diff>=5)cnt+=(diff/5),diff%=5;
        if(diff>=2)cnt+=(diff/2),diff%=2;
        if(diff>=1)cnt+=diff;
        cout<<cnt<<"\n";



    }
    return 0;
}
