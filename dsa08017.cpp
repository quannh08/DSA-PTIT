#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		int n ;
		cin >> n;
		queue<ll> qe;
		stack<ll> st;
		qe.push(6);
		qe.push(8);
		while(!qe.empty()){
			ll tmp = qe.front();
			qe.pop();
			if(pow(10,n) <= tmp) break;
			st.push(tmp);
			qe.push(tmp*10+6);
			qe.push(tmp*10+8);
		}
		while(!st.empty()){
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<"\n";
	}
}