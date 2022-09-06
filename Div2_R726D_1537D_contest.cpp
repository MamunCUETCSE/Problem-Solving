#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int cnt=0;
        cin>>n;
        if(n%2==1)
        {
            cout<<"Bob"<<endl;
            continue;
        }
       while(n%2==0)
       {
           cnt++;
           n/=2;
       }
       if(n>1)
       {
           cout<<"Alice"<<endl;
       }
       else if(cnt%2==0)
       {
           cout<<"Alice"<<endl;
       }
       else
        cout<<"Bob"<<endl;
    }
}
