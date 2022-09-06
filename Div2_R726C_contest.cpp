#include<bits/stdc++.h>
const int maxn=1000000001
using namespace std;
int main()
{
    int t,n,h[maxn];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>h[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(h[i]==h[j])
                {
                    h[1]=h[n]=h[i];
                    break;
                }
                else
                {
                    sort(h,h+n);

                }
            }
        }
    }
}
