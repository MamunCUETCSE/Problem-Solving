#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s1,s2,s3,s4,s5,s6,total;
    cin>>a>>b>>c;
    s1=(a+b)*c;
    s2=a*(b+c);
    s3=a*b*c;
    s4=a+(b*c);
    s5=(a*b)+c;
    s6=a+b+c;
    total=max(max(max(max(max(s1,s2),s3),s4),s5),s6);
    cout<<total;

}
