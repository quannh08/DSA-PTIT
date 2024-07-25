#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<ll> qe;
		qe.push(9);
		while(!qe.empty()){
			ll tmp=qe.front();
			qe.pop();
			if(tmp%n==0){
				cout<<tmp<<"\n";
				break;
			}
			qe.push(tmp*10);
			qe.push(tmp*10+9);
		}
	}
	return 0;
}