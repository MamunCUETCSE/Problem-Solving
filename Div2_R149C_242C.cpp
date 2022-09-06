#include<bits/stdc++.h>
using namespace std;
int go[8][2]={{-1,-1},{0,-1},{1,-1},{1,0},{-1,0},{-1,1},{0,1},{1,1}};
queue<pair<int,int> >qq;
map<pair<int,int>,int>m;
int sx,sy,ex,ey,n;
int r,li,ri;
long long ans;
void bfs()
{
    pair<int,int>start;
    start=make_pair(sx,sy);
    m[start]=0;
    qq.push (start); /// into the first team
    while(!qq.empty())
    {
        pair<int,int>p1,p2;
        p1=qq.front();
        if(p1.first==ex&&p1.second==ey)
        {
                         ans = m [p1]; /// termination condition is found at the end position returns
            return;
        }
        qq.pop();
        for(int i=0;i<8;i++)
        {
            p2.first=p1.first+go[i][0];
                         p2.second = p1.second + go [i] [1]; /// continue to go down
                         if (! m.find (p2) = m.end () && m [p2] == - 1) /// not traveled and determines whether the extent practicable,
            {
                                 m [p2] = m [p1] +1; /// plus a number of steps
                qq.push(p2);
            }
        }
    }
}
int main()
{
    cin>>sx>>sy>>ex>>ey;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>r>>li>>ri;
                 for (int j = li; j <= ri; j ++) /// in the column sections may each take
                         m [make_pair (r, j)] = - 1; /// initial value is -1, no through
    }
    ans=-1;
    bfs();
    cout<<ans<<endl;
    return 0;
}

