#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    int Cnt;
  while(cin>>n){
  Cnt =1;
for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(int i=0;i<n-1;i++)
    {
        if(a[i] && a[i]!=a[i+1])
            Cnt++;
    }
     cout<<Cnt<<endl;
  }
  return 0;
}
