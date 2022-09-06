#include<bits/stdc++.h>
using namespace std;

int main()
{
    char coordinate1[5],coordinate2[5];
    while(cin>>coordinate1>>coordinate2)
    {
        int x = coordinate2[0]-coordinate1[0];
        int y = coordinate2[1]-coordinate1[1];
        cout<<max(abs(x),abs(y))<<endl;
        while(x||y)//x or y until false(0)
        {
            if(x>0)
                x--, cout<<"R";
            if(x<0)
                x++,cout<<"L";
            if(y>0)
                y--,cout<<"U";
            if(y<0)
                y++,cout<<"D";
            cout<<endl;
        }
    }

    return 0;

}
