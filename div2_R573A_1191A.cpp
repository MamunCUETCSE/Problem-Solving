#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x;
    n=x/4;
    if(x ==4*n+1)
        cout<<"0"<<" "<<"A";
    else if(x==4*n+2)
        cout<<"1"<<" "<<"B";
    else if(x==4*n+3)
        cout<<"2"<<" "<<"A";
    else
        cout<<"1"<<" "<<"A";

}
