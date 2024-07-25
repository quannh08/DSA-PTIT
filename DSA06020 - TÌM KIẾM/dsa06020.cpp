#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n , x;
		cin >> n>> x;
		map<int,int> mp;
		int a;
		for(int i = 0 ; i < n ; i++){
			cin >> a;
			mp[a]++;
		}
		if(mp[x]) cout << "1\n";
		else cout << "-1\n";
	}
}