#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> stk;
		for(int i=0;i<s.length();i++){
			if (stk.empty()) stk.push(s[i]);
			else if(stk.top()=='(' && s[i]==')')stk.pop();
			else if(stk.top()=='[' && s[i]==']') stk.pop();
			else if(stk.top()=='{' && s[i]=='}')stk.pop();
			else stk.push(s[i]);
		}
		if(stk.empty()) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}