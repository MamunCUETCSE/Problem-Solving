#include<iostream>
#include<string>
using namespace std;
char String[200];
int length;
int main()
{
    int i,j;
    for(i=1; ;i++)
    {
        cin>>String[i];
        if((String[i]>='A'&&String[i]<='Z')||(String[i]>='a'&&String[i]<='z'))
            continue;
            break;
    }
    length=i-1;
    for(i=1;i<=length;i++)
    {
        if(String[i]=='A' || String[i]=='E'
           || String[i]=='I' || String[i]=='O'
           || String[i]=='U' || String[i]=='Y'
           || String[i]=='a' || String[i]=='e'
           || String[i]=='i' || String[i]=='o'
           || String[i]=='u' || String[i]=='y')
            continue;
            else{
        cout<<".";
            }
        if(String[i]>='A'&&String[i]<='Z')
            cout<<String[i]-'A'+'a';
        else
        {
            cout<<String[i];
        }
    }
return 0;
}
