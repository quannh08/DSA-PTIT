#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int k;
		cin >> k;
		string s;
		cin >> s;
		map<char,int> mp;
		for(int i=0;i<s.length();i++){
			mp[s[i]]++;
		}
		priority_queue<int> pq;
		for(auto x:mp) pq.push(x.second);
		
		while(k--){
			int x=pq.top();
			pq.pop();
			pq.push(x-1);
		}
		ll res=0;
		while(!pq.empty()){
			res+=pq.top()*pq.top();
			pq.pop();
		}
		cout<<res<<"\n";
	}
	return 0;
}