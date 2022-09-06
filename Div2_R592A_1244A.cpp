#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int test;
    double a,b,c,d,k;
    double x,y;
    cin>>test;
    while(test--)
    {
    cin>>a>>b>>c>>d>>k;
    x=ceil(a/c);
    y=ceil(b/d);
    if(x+y>k){
        cout<<"-1"<<endl;}
    else if(x+y<=k && y==1)
    {
        cout<<k-y<<" "<<y<<endl;
    }
    else
        cout<<x<<" "<<k-x<<endl;
    }
}
