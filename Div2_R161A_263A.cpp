#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[6][6],x=0,y=0,ans;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
        cin>>matrix[i][j];
        if(matrix[i][j]==1)
        {
            x=i;
            y=j;
        }
        }

    }
    ans= abs(x-3)+abs(y-3);
    cout<<ans;
    return 0;
}
