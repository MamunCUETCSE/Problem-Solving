#include<bits/stdc++.h>
#include<algorithm>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    int n;
       string st;
        cin>>n;
       set<int>S;
        cin>>st;
        for(int i=0;i<n;i++)
        {
            if(st[i]>='A' && st[i]<='Z')
            {
                S.insert(st[i]-'A');
            }
            else if(st[i]>='a' && st[i]<='z')
            {
                S.insert(st[i]-'a');
            }
        }
          if(S.size()==26){
        cout<<"YES";
    }
    else
       {
         cout<<"NO";
       }

}
