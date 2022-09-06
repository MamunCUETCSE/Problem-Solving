#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,k,numTurns;
    while(cin>>n>>k)
    {
        numTurns = n/k;
        if(numTurns%2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
