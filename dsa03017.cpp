#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
void resolve(){
	int k;
	cin >> k;
	string s;
	cin >> s;
	map<char,int> m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	
	priority_queue<int> pq;
	for(auto x:m){
		pq.push(x.second);
	}
	
	while(k){
		int x=pq.top();
		x--;
		pq.pop();
		pq.push(x);
		k--;
	}
	ll re=0;
	while(!pq.empty()){
		re+=pq.top()*pq.top();
		pq.pop();
	}
	
	cout<<re;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
		cout<<"\n";
	}
}