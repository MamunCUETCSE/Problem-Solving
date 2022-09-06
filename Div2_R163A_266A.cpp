#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; string s;
    while(cin>>n>>s){
    int cnt=0;
        for(int j=1;j<=n;j++)
        {
            if(s[j]==s[j-1])
                cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
