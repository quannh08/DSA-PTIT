#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		queue<ll> qe;
		qe.push(1);
		while(!qe.empty()){
			ll tmp = qe.front();
			qe.pop();
			if(tmp % n ==0){
				cout<<tmp<<"\n";
				break;
			}
			qe.push(tmp*10);
			qe.push(tmp*10+1);
		}
	}
	return 0;
}