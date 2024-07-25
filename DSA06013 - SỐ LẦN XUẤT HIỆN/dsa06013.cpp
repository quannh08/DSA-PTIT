#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void resolve(){
	int n,k;
	cin >> n>> k;
	map<int,int> mp;
	int x;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		mp[x]++;
	}
	if(mp[k]) cout << mp[k] << "\n";
	else cout << "-1\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}