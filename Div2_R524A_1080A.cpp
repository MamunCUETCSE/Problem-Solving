#include<bits/stdc++.h>
#include<stdlib.h>
#include<map>
#include <cstdio>
#include<math.h>
#define frloop(i,n) for(int i=0; i<n; i++)
#define pb push_back()
typedef long long ll;
using namespace std;
int main()
{
  long double n,k,Red,Green,Blue;
   ll notebooks;
   cin>>n>>k;
   Red = ceil((n*2)/k);
   Green = ceil((n*5)/k);
   Blue = ceil((n*8)/k);
   notebooks = Red + Green + Blue;
   cout<<notebooks;
    return 0;
}
