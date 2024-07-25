#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
	int n;
	cin >> n;
	int a[n+1],res[n+1];
	stack<int> st;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && a[i] >= st.top())st.pop();
		if(st.empty()) res[i] = -1;
		else {
			res[i]=st.top();
		}
		st.push(a[i]);
	}
	for(int i=0;i<n;i++){
		cout<<res[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}