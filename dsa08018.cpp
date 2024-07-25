#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define MAX 100005


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<ll> qe;
		qe.push(6);
		qe.push(8);
		vector<ll> vll;
		while(!qe.empty()){
			ll tmp = qe.front();
			qe.pop();
			if(tmp>pow(10,n)){
				break;
			}			
			vll.pb(tmp);
			qe.push(tmp*10+6);
			qe.push(tmp*10+8);
		}
		cout<<vll.size()<<"\n";
		for(int i=0;i<vll.size();i++){
			cout<<vll[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}