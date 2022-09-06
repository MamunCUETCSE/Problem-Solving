#include<bits/stdc++.h>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
 long long int n,temp;
    while(cin>>n){
    temp = n%10;
    if(temp==0)
        cout<<n;
    else if(temp<=5)
        cout<<n-temp;
    else
        cout<<n+(10-temp);
    }
    return 0;

}
