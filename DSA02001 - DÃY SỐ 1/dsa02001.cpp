#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}	
	
	int x=n;
	while(x--){
		cout<<"["<<v[0];
		for(int i=1;i<n;i++){
			cout<<" "<< v[i];
		}
		cout<<"]\n";
		for(int i=1;i<n;i++){
			v[i-1]=v[i]+v[i-1];
		}
		n--;
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}