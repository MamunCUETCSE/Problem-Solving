#include<bits/stdc++.h>
#include<cstdio>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;
char s1[30],s2[30],temp[30];
char s3[1001];
int main()
{

    cin>>s1>>s2>>s3;
    int l=(int)strlen(s1);
     for(int i=0;i<l;i++)
    {
        temp[s1[i]]=s2[i];

    }
    int len = (int)strlen(s3);
    for(int i=0;i<len;i++){
    if(isdigit(s3[i]))
    {
        cout<<s3[i];
        continue;
    }
    else if(s3[i]>='A' && s3[i]<='Z')
    {
        char tem = temp[s3[i]-'A' +'a']-32;
        cout<<tem;
        continue;
    }
    else
       {
        cout<<temp[s3[i]];
        continue;
       }

    }
    return 0;
    }


