#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void resolve(){
	int n,k;
	cin >> n >>k;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	
	for(int i = 0 ; i < k ; i++){
		cout<<v[i]<<" ";
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