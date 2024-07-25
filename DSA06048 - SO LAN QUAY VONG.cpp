#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n;
	cin >> n;
	int a[n+5];
	
	for(int i = 1 ; i < n+1 ; i++){
		cin >> a[i];
	}
	int res = 0;
	for(int i = 2 ; i < n+1 ; i++){
		if(a[i]<a[i-1]){
			res = i-1;
			break;
		}
	}
	cout << res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
		cout<<"\n";
	}
}