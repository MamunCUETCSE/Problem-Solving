#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,coin,x=0;
    cin>>coin>>sum;
    if(sum==coin)
    {
        cout<<"1";
    }
    else{
         if(sum>coin && (sum%coin==0))
         {
             x=sum/coin,cout<<x;
         }
       else if(sum>coin)
       {
           x=sum/coin,sum%=coin;
        if(sum<coin)x+=1,cout<<x;
       }
       else cout<<(x+=1);


    }
}
