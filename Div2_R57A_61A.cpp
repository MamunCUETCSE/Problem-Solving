#include<bits/stdc++.h>
#include<stdlib.h>
#include<cstdio>
using namespace std;
int main()
{
   string a,b;
   int ans[101];
   cin>>a>>b;
   for(int i=0;i<a.size();i++)
   {
       if(a[i]!=b[i])
       {
           cout<<"1";
       }
       else{
        cout<<"0";
       }
   }

}
