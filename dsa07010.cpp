#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

string cal = "+-*/";

void resolve(){
	string s;
	cin >> s;
	stack<string> stk;
	for(int i=s.length()-1;i>=0;i--){
		if(cal.find(s[i]) == string::npos){
			string tmp = "";
			tmp+=s[i];
			stk.push(tmp);
		}
		else{
			string tmp="";
			tmp+=stk.top();
			stk.pop();
			tmp+=stk.top();
			stk.pop();
			tmp+=s[i];
			stk.push(tmp);
		}
	}
	cout<<stk.top()<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}