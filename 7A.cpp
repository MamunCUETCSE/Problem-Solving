#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#define ll long long
#define mod 998244353
#define inf 0x3f3f3f3f
using namespace std;
#define ll long long
char a[10][10];
int h(int x)
{
    int sum = 0;
    for(int i = 1; i <= 8; i ++)
        if(a[x][i] == 'B') sum ++;
    if(sum == 8) return 1;
    else return 0;
}
int l(int x)
{
    int sum = 0;
    for(int i = 1; i <= 8; i ++)
        if(a[i][x] == 'B') sum ++;
    if(sum == 8) return 1;
    else return 0;
}
int main()
{
    for(int i = 1; i <= 8; i ++)
        for(int j = 1; j <= 8; j ++)
        cin>>a[i][j];
    int ans = 0;
    for(int i = 1; i <= 8; i ++)
    {
        ans += h(i);
        ans += l(i);
    }
    if(ans == 16) printf("8\n");
    else printf("%d\n",ans);
    return 0;
}
