#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
	stack<string> stk;
	string s;
	getline(cin,s);
	stringstream ss(s);
	string word;
	while(ss>> word){
		stk.push(word);
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	cout<<"\n";
	return;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		resolve();
	}
	return 0;
}