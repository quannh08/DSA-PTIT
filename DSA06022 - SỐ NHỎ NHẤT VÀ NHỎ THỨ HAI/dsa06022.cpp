#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n;
	cin >> n;
	set<int> se;
	for(int x,i = 0 ; i < n ; i++){
		cin >> x;
		se.insert(x);
	}
	if(se.size()==1){
		cout<<"-1\n";
		return;
	} 
	int cnt=0;
	for(auto it:se){
		cout << it <<" ";
		cnt++;
		if(cnt==2)break;
	}
	cout<<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}