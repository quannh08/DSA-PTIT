#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> se;
		int x;
		for(int i = 0 ; i < n ; i++){
			cin >> x;
			se.insert(x);
		}
		int tmp=0;
		for(int i = *se.begin() ; i <= *se.rbegin() ; i++){
			tmp++;
		}
		cout << tmp - se.size() << "\n";
	}
}