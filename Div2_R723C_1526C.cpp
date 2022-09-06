#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
   priority_queue<long long, vector<long long>, greater<long long>>p;
   int n;
   cin>>n;
   long long sum=0;
   for(int i=0;i<n;i++)
   {
       long long health;
       cin>>health;
       sum+=health;
       p.push(health);
       while(sum<0)
       {
           sum-=p.top();
           p.pop();
       }
   }
   cout<<(int)p.size();
}

