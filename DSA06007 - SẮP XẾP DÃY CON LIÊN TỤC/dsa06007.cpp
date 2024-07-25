#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void resolve(){
	int n;
	cin >> n;
	int a[n+5],b[n+5];
	for(int i = 1 ; i < n + 1 ;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1 , b + n + 1);
	int start = 1,end = n;
	for(int i = 1 ; i <= n ; i++){
		if(a[i] != b[i]){
			start = i;
			break;
		}
	}
	
	for(int i = n ; i >= 1 ; i--){
		if(a[i] != b[i]){
			end = i;
			break;
		}
	}
	cout<< start << " " << end << "\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}