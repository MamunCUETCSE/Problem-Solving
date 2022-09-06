#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
int main()
 {
     ios::sync_with_stdio(false);
     cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(b==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*(ll)b<<" "<<a*(ll)(b+1)<<endl;
        }
    }
}
