#include <bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res="";
		res+=s[0];
		for(int i=1;i<s.size();i++){
			if(res[i-1]==s[i])res+="0";
			else res+="1";
		}
		cout<<res<<"\n";
	}
}