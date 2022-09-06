#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,R1,R2,C1,C2;
    char G[130][130];
    cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>G[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(G[i][j]=='B')
                {
                    R1=i;
                    C1=j;
                    goto x;
                }
            }
        }
     x: for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(G[i][j]=='B' && G[i][j+1]!='B' && G[i+1][j]!='B')
                {
                    R2=i;
                    C2=j;
                    goto y;
                }
            }
        }
        y: cout<<(R1+R2+2)/2<<" "<<(C1+C2+2)/2;


}
