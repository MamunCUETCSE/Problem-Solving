#include<bits/stdc++.h>
#include<stdlib.h>
#include<cstdio>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;
int main()
{
    string s;
    string D="Danil", O ="Oliya", S= "Slava", A="Ann", N="Nikita";

    while(cin>>s){
    int d=0,o=0,v=0,a=0,n=0,sum;
    for(int i=0;i<s.size();i++)
    {

        if(s[i]=='D' && s[i+1]=='a' && s[i+2]=='n' && s[i+3]=='i' && s[i+4]=='l')
            d++;
        else if(s[i]=='O' && s[i+1]=='l' && s[i+2]=='y' && s[i+3]=='a')
            o++;
        else if(s[i]=='S' && s[i+1]=='l' && s[i+2]=='a' && s[i+3]=='v' && s[i+4]=='a')
            v++;
        else if(s[i]=='A' && s[i+1]=='n' && s[i+2]=='n')
            a++;
        else if(s[i]=='N' && s[i+1]=='i' && s[i+2]=='k' && s[i+3]=='i' && s[i+4]=='t' && s[i+5]=='a')
            n++;
    }
    sum=d+o+v+a+n;
     if(sum==1)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;
     flush(cout);
    }
     return 0;
}
