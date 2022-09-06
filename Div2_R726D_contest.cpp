#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int cnt=0,d;
        cin>>n;
        if(n==1)
        {
            cout<<"Bob"<<endl;
        }
        else{
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
               d=i;
               while(n!=d)
               {
                   n-=d;
                   cnt++;
               }
               if(cnt%2)
               {
                   cout<<"Alice"<<endl;
               }
            }
               else
               {
                cout<<"Bob"<<endl;
               }
              // break;
            }
           // else
            //{
              //  cout<<"BOB"<<endl;
           // }

        }
        }
        return 0;
}
