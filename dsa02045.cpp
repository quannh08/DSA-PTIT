#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int n;
string s;
vector<string> res;
void Try(int i,string tmp){
	if(i==n){
		res.pb(tmp);
		return;
	}
	string x=tmp+s[i];
	Try(i+1,tmp);
	Try(i+1,x);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> s;
		res.clear();
		for(int i=0;i<n;i++){
			string tmp="";
			tmp+=s[i];
			Try(i+1,tmp);
		}
		
		sort(res.begin(),res.end());
		for(auto x: res) cout<< x << " ";
		cout<<"\n";
	}
	return 0;
}