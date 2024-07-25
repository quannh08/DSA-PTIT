#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int n;
	cin >> n;
	cin.ignore();
	set<pair<int,int>> se;
	for(int i=1;i<=n;i++){
		string line;
		getline(cin ,line);
		stringstream ss(line);
		string num;
		while(ss>> num){
			int a=stoi(num);
			if(a > i) se.insert({i,a});
		}
	}
	
	for(auto x: se){
		cout<<x.first<<" "<<x.second<<"\n";
	}
}