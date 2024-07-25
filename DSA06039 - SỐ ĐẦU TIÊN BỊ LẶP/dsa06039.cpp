#include<bits/stdc++.h>
using namespace std;

int Search(int a[],int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] == a[j]){
				return a[i];
			}
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+5];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		if(Search(a,n) == -1) cout << "NO\n";
		else cout<<Search(a,n) << "\n";
	}
}