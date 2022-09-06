#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;string s;
   while( cin>>n>>s){
      s='0'+s+'0';
     if(s.find("000")== -1 && s.find("11")==-1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
}
