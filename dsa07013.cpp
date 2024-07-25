#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<int> stk;
		for(int i = 0 ; i < s.length() ; i++){
			if(isdigit(s[i])){
				stk.push(s[i] - '0');
			}
			else {
				int a = stk.top();
				stk.pop();
				int b = stk.top();
				stk.pop();
				if(s[i] == '+'){
					a = a + b;
					stk.push(a);
				}
				else if(s[i] == '-'){
					a = b - a;
					stk.push(a);
				}
				else if(s[i] == '*'){
					a = a * b;
					stk.push(a);
				}
				else{
					a = b / a;
					stk.push(a);
				}
			}
		}
		cout << stk.top()<<"\n";
	}
	return 0;
}