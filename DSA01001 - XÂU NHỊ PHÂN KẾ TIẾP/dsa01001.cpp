#include<bits/stdc++.h>
using namespace std;
void sinh(){
	string str;
	cin >> str;
	int i=str.length()-1;
	while(str[i]=='1'&&i>=0){
		str[i]='0';
		i--;
	}
	if(i>=0)str[i]='1';
	cout<<str<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		sinh();
	}
}