#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s[1000];
    int acnt=0,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==5)
            acnt++;
    }
    b=n-acnt;
    acnt/=9;
    if(acnt!=0 && b!=0)
    {
        for(int i=0;i<acnt;i++)
        {
            cout<<"555555555";
        }
        for(int i=0;i<b;i++)
        {
            cout<<"0";
        }
    }
    else
    {
        if(b==0)
        {
            cout<<"-1";
        }
        else{
            cout<<"0";
        }
    }
}
