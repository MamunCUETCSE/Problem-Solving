#include<bits/stdc++.h>
using namespace std;
int n;
char s[200];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        cin>>n;
        cin>>s;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')cnt1++;
            if(s[i]=='0')cnt2++;
        }
        if(cnt1!=cnt2)
        {
            cout<<"1"<<endl;
            cout<<s<<endl;
        }
        else{
         cout<<"2"<<endl;
         cout<<s[0]<<" ";
        for(int i=1;i<n;i++)
            cout<<s[i];

        }

	return 0;
}

