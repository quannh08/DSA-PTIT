#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res="";
		res+=s[0];
		for(int i=1;i<s.length();i++){
			if(s[i]=='1'){
				if(s[i-1]=='0')res+="1";
				else res+="0";
			}
			else{
				if(s[i-1]=='1')res+="1";
				else res+="0";
			}
		}
		cout<<res<<"\n";
	}
}