#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
void littleC(int n);
int main()
{
    int n;
    while(cin>>n)
    {
        littleC(n);
    }
}
void littleC(int n)
{
    if(n%3==0)
    {
        cout<<"1" <<" "<<"1"<<" "<<n-2<<endl;
    }
    else if(n%3==1)
    {
        cout<<"1" <<" "<<"1"<<" "<<n-2<<endl;
    }
    else if(n%3==2)
    {
        cout<<"1" <<" "<<"2"<<" "<<n-3<<endl;
    }
}

