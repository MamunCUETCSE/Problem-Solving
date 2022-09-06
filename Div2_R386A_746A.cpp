#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,total;
    cin>>a>>b>>c;
    int A=a/1,B=b/2,C=c/4;
    x=min(min(C,B),A);
   total=((1*x)+(2*x)+(4*x));
   cout<<total;

}
