#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long 


void resolve(){
	string s;
	cin >> s;
	stack<char> stk;
	for(int i=0;i<s.length();i++){
		if(stk.size() && stk.top()=='(' && s[i]==')'){
			stk.pop();
		}
		else stk.push(s[i]);
	}
	cout<< s.length()-stk.size()<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}