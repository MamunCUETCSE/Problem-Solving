#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
#include<string>
#include<algorithm>
typedef long long ll;
using namespace std;
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0),cout.tie(0);
        int n;
        string s;
       while(cin>>n){
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='+')
                cnt++;
                else cnt--;
                if(cnt<0)cnt=0;

        }
        cout<<cnt<<endl;
        flush(cout);
       }
    }


