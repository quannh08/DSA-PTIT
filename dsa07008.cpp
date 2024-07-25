#include<bits/stdc++.h>
using namespace std;

int check(char a){
	if(a=='^')return 3;
	if(a=='/'||a=='*') return 2;
	if(a=='+'||a=='-') return 1;
	return 0;
}

void resolve(){
	string s;
	cin >> s;
	stack<char> stk;
	string res="";
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])) res+=s[i];
		else if(s[i]=='(') stk.push(s[i]);
		else if(s[i]==')'){
			while(stk.size() && stk.top()!='('){
				res+=stk.top();
				stk.pop();
			}
			stk.pop();
		}		
		else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
			while(stk.size() && check(stk.top()) >= check(s[i])){
				res+=stk.top();
				stk.pop();
			}
			stk.push(s[i]);
		}
	}
	
	while(stk.size()&& stk.top()!='('){
		res+=stk.top();
		stk.pop();
	}
	cout<<res<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}