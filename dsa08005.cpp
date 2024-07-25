#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<string> qe;
		qe.push("1");
		for(int i=0;i<n;i++){
			string tmp=qe.front();
			qe.pop();
			cout<<tmp<<" ";
			qe.push(tmp+"0");
			qe.push(tmp+"1");
		}
		cout<<"\n";
	}
}