#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a;
    cin>>m>>n>>a;
    if(m>a && n>a){
    if(m%a==0 && n%a==0)
    {
        unsigned long long int temp = (m/a * n/a);
        cout<<temp;
    }
    else if(m%a>0 && n%a>=0)
    {
        unsigned long long int temp = (m/a+1)*(n/a+1);
        cout<<temp;
    }
    else if(m%a==0 && n%a>=0)
    {
        unsigned long long int temp = (m/a)*(n/a+1);
        cout<<temp;
    }
    else if(m%a==m && n%a==n)
    {
        unsigned long long int temp = (m/a * n/a);
        cout<<temp;
    }
    else
    {
        unsigned long long int temp =(m/a+1)*(n/a);
        cout<<temp;
    }
    }
    else
    {
        unsigned long long int var = (ceil((double)m/a))*(ceil((double)n/a));
        cout<<var;

    }


}
