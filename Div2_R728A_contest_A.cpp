#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
       int pairsum=0;
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
          int cnt=0;
         m: for(int i=1;i<=n;i++)
          {
              goto s;
          }
          s:
             for(int j=i+1;j<=n;j++)
            {
                int sum=arr[i]*arr[j];
                if(sum==i+j)
                    cnt++;
                    goto m;

            }
          cout<<cnt<<endl;
    }
}
