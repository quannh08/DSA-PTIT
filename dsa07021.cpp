#include<bits/stdc++.h>
using namespace std;

void resolve(){
	string s;
	cin >> s;
	stack<int> st;
	st.push(-1);
	int res = -1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='(') st.push(i);
		else{
			st.pop();
			if(st.empty()) st.push(i);
			else res = max(res,i-st.top());
		}
	}
	cout<< res<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}