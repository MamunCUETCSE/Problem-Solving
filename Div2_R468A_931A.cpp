#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int a,b;
int main()
{

    while(scanf("%d%d",&a,&b)!=EOF)
{
    if(a>b)//swapping two numbers
    {
        int temp=a;
        a=b;
        b=temp;
    }
    int sum=0;
    int step=1;
    while(a<b)
    {
        if(abs(a-b)==1)
        {
            sum+=step;
            break;
        }
        a++;b--;
        sum+=2*step++;// first 2*step tehn step++;
    }
    cout<<sum<<endl;
    }
    return 0;
}
