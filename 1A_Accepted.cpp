#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,a;
    unsigned long long int flagstones;
    cin>>n>>m>>a;
    flagstones =(ceil((double)n/a))*(ceil((double)m/a));
    cout<<flagstones;
}
