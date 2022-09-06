#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[1000];
    arr[0]=arr[1]=1;
    for(int i=2;i<1000;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    int j=1;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            if(i==arr[j])
            {
                j++;
                cout<<"O";
            }
            else
                cout<<"o";
        }

    }
}
