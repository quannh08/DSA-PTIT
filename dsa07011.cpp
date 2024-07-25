#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
	string s;
	cin >> s;
	stack<string> stk;
	for(int i=0;i<s.length();i++){
		if(isalpha(s[i])){
			string str = "";
			str+=s[i];
			stk.push(str);
		}
		else if(stk.size()){
			string tmp1=stk.top();
			stk.pop();
			string tmp2=stk.top();
			stk.pop();
			string tmp=s[i]+tmp2+tmp1;
			stk.push(tmp);
		}
	}
	cout<<stk.top()<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}