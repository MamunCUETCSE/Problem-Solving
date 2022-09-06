#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int R=-n;R<=n;R++)
    {
        int top=n-abs(R);
        for(int i=0;i<abs(R);i++)
        {
            cout<<"  ";
        }
        for(int i=0;i<top;i++)
        {
            cout<<i<<" ";
        }
        for(int i=top;i>0;i--)
        {
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
}
