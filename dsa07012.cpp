#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void resolve()
{
	string s;
	cin >> s;
	stack<string> stk;
	for(int i=0;i<s.length();i++)
	{
		if(isalpha(s[i]))
		{
			string str="";
			str+=s[i];
			stk.push(str);	
		}
		
		else {
			string tmp1=stk.top();
			stk.pop();
			string tmp2=stk.top();
			stk.pop();
			string tmp="("+tmp2+s[i]+tmp1+")";
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