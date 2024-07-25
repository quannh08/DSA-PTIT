#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	string a,b;
	cin >> a >> b;
	ll sumMin=0,sumMax=0;
	
	for(int i=0;i<a.length();i++){
		if(a[i]=='6')a[i]='5';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='6')b[i]='5';
	}
	sumMin=stoi(a)+stoi(b);
	
	for(int i=0;i<a.length();i++){
		if(a[i]=='5')a[i]='6';
	}
	for(int i=0;i<b.length();i++){
		if(b[i]=='5')b[i]='6';
	}
	sumMax=stoi(a)+stoi(b);
	cout<<sumMin<<" "<<sumMax;
}