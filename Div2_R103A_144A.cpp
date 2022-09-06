#include<iostream>
#include<cmath>
#include<cstdio>
#define frlp(n) for(int i=0;i<n;i++)
using namespace std;
int maxv=0,maxi=0,minv=1000,mini=0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n;
    cin>>n;
    frlp(n)
    {
        int x;
        cin>>x;
        if(x>maxv)
        {
            maxv=x;
            maxi=i;
        }
        if(x<=minv)
        {
            minv=x;
            mini=i;
        }
    }
    if(maxi>mini)
    {
        cout<<(maxi-1)+((n-mini)-1);
    }
    else
    {
        cout<<(maxi-1)+(n-mini);
    }

}
