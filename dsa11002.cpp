#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

string str = "+-*/";
bool check (string c)
{
	if(str.find(c) == string::npos)
	{
		return 1;
	}
	return 0;
}

void resolve(){
	int n;
	cin >> n;
	vector<string> vstr;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		vstr.pb(s);
	}
	
	queue<ll> qe;
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		if(check(vstr[i]))qe.push(stoll(vstr[i]));
		else
		{
			ll tmp1=qe.front();
			qe.pop();
			ll tmp2=qe.front();
			qe.pop();
			if(vstr[i]=="+") qe.push(tmp1+tmp2);
			else if(vstr[i]=="-") qe.push(tmp2-tmp1);
			else if(vstr[i]=="*") qe.push(tmp2*tmp1);
			else qe.push(tmp2/tmp1);
		}
	}
	cout<<qe.front()<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}