#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[3];
    cin>>n;
    while(n--)
    {
        int temp1,temp2,temp3;
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        cout<<min(arr[0]+arr[1],(arr[0]+arr[1]+arr[2])/2) <<endl;
    }
        return 0;
    }

