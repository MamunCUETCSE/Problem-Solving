#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    if(m%n==0 && k%n==0)
        cout<<"YES";
        else if(m<n || k<n)
            cout<<"NO";
            else
                cout<<"YES";

}
