#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int m,n;
		cin >> m >> n;
		vector<int> v(m+n);
		for(int i = 0 ; i < m + n ; i++){
			cin >> v[i];
		}
		sort(v.begin(),v.end());
		for(int x:v){
			cout<< x <<" ";
		}
		cout<<endl;
	}
}