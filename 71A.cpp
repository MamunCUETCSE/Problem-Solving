#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    int n,temp,Count=0;
    cin>>n;
    while(n!=0)
    {
        cin>>str;
        if(str.length()>10)
        {
            cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
        n--;
    }
}
