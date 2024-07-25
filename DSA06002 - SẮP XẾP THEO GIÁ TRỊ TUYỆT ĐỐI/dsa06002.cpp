#include<bits/stdc++.h>
using namespace std;
using ll =long long;
ll mod =123456789;


int n,x;
bool cmp(int a,int b){
	return abs(x-a) < abs(x-b);
}

void resolve(){
	
	cin >> n >> x;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	stable_sort(v.begin(),v.end(),cmp);
	for(int i = 0 ; i < n ; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}