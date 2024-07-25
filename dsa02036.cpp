#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int a[100];
vector<string> vs;
vector<int> v;
int n;
void Result(){
	ll sum=0;
	for(int i=0;i<n;i++){
		if(a[i]) sum+=v[i];
	}
	if(sum%2) {
		string tmp="";
		for(int i=0;i<n;i++){
			if(a[i]) tmp+=to_string(v[i])+" ";
		}
		vs.pb(tmp);
	}
}

void Try(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n-1) Result();
		else Try(i+1);
	}
}


void resolve(){
	
	cin >> n;
	
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end(),greater<int>());
	Try(0);
	sort(vs.begin(),vs.end());
	for(int i=0;i<vs.size();i++){
		cout<<vs[i]<<"\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}