#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void resolve(){
	int n,m;
	cin >> n >> m;
	map<int,int> mp;
	int x;
	
	for(int i=0;i<n;i++){
		cin >> x;
		mp[x]=1;
	}
	for(int i=0;i<m;i++){
		cin >> x;
		mp[x]++;
	}
	
	for(auto it:mp){
		cout<<it.first<<" ";
	}
	cout<<endl;
	for(auto it:mp){
		if(it.second==2){
			cout<<it.first<<" ";
		}
	}
	cout<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}