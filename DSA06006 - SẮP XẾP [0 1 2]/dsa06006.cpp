#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void resolve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for(int x: v){
		cout<<x<<" ";
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