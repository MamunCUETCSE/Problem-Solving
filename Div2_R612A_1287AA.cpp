#include<bits/stdc++.h>
#include<cstdio>
#include<string>
#include<stdlib.h>
using namespace std;
typedef long long ll;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int test,n;
    string s;
    cin>>test;
    while(test--)
    {
        int Max=0;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A'){
                int j=i+1;
                while(s[j]=='P' && j<n)j++;
                j-=1;
                Max=max(Max,j-i);
                i=j;
            }
        }
        cout<<Max<<endl;
        flush(cout);
    }
}
