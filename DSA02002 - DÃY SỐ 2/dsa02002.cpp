#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}	
	vector<string> vstr;
	int x=n;
	int tmp=n;
	while(x--){
		string s="[";
		s+=to_string(v[0]);
		for(int i=1;i<n;i++){
			s+=" "+to_string(v[i]);
		}
		s+="]";
		vstr.push_back(s);
		for(int i=1;i<n;i++){
			v[i-1]=v[i]+v[i-1];
		}
		n--;
	}
	for(int i=tmp-1;i>=0;i--){
		cout<<vstr[i]<<" ";
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