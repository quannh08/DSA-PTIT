#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int n,k;
int a[1005];
string tmp="";
vector<string> v;
void result(){
	string s = "";
	for(int i=1;i<=n;i++){
		if(a[i]==0) s+="A";
		else s+="B";
	}
	if(s.find(tmp)!=string::npos && s.find("A"+tmp)==string::npos){
		v.pb(s);
	}
	return;
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) result();
		else Try(i+1);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> k;
	while(k--){
		tmp+="A";
	}
	Try(1);
	cout<<v.size()<<"\n";
	for(auto x: v){
		cout<< x <<"\n";
	}
	return 0;
}