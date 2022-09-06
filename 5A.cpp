#include<bits/stdc++.h>
using namespace std;
int main(){
	char c,line[1000];
	int addd(0),totalcount(0);
	while(cin >> c){
		if(c == '+'){
			addd++;
		}
		if(c == '-'){
			addd--;
		}
		if(c == ':'){
			gets(line);
			totalcount += strlen(line) * addd;
		}
	}
	cout << totalcount << endl;
}
