#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool check(char a){
	return (a>='A' && a<='Z')||(a>='a' && a<='z');
}

int main(){
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.length();
		stack<string> stk;
		for(int i = 0 ; i < n ; i++)
		{
			if(check(s[i]))
			{
				string tmp="";
				tmp+=s[i];
				stk.push(tmp);
			}
			else
			{
				string tmp1 = stk.top();
				stk.pop();
				string tmp2 = stk.top();
				stk.pop();
				string tmp3 = tmp2 + s[i] + tmp1;
				stk.push(tmp3);
			}
		}
		cout << stk.top() << "\n";
	}
}