#include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
bool palindrome(const string &str)
{
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(!palindrome(str+'a'))
        {
            cout<<"YES"<<"\n"<<str<<'a'<<endl;
        }
       else if(!palindrome('a'+str))
        {
        cout<<"YES"<<"\n"<<'a'<<str<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}