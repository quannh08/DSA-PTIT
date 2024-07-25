#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define pb push_back

void resolve(){
	string s;
	cin >> s;
	int cnt=1;
	stack<int> stk;
	stk.push(cnt);
	for(int i=0;i<s.length();i++){
		if(s[i]=='D'){
			cnt++;
			stk.push(cnt);
		}
		else{
			while(!stk.empty()){
				cout<<stk.top();
				stk.pop();
			}
			cnt++;
			stk.push(cnt);
		}
	}
	while(stk.size()){
		cout<<stk.top();
		stk.pop();
	}
	cout<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}