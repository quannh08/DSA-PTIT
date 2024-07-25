#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >>t;
	while(t--){
		int n,m;
		cin >> n>>m;
		int a[n+5],b[m+5];
		
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(int i = 0 ; i < m ; i++){
			cin >> b[i];
		}
		sort(a , a + n);
		sort(b , b + m);
		long long result = 1LL * a[n-1] * b[0];
		cout << result << endl;
	}
}