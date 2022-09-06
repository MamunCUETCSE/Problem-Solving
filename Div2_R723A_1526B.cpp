#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<20;i++)
        {
            if(n%11==0)
            {
                cout<<"YES"<<endl;
             goto finish;
            }
            n-=111;
            if(n<0)
                break;

        }
        cout<<"NO"<<endl;
        finish:;


    }
    return 0;
}
