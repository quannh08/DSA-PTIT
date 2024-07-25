#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
int n;
int cnt=0;
vector<int> a;
vector<string> vp;
void result(){
	vector<int> b=a;
	string res="(";
	for(int j=0;j<b.size();j++){
		res+=to_string(b[j])+" ";
	}
	res.pop_back();
	res+=")";
	cnt++;
	vp.pb(res);
}

void Try(int i,int sum,int cur){
	for(int j = cur ; j >=1 ; j--){
		sum+=j;
		a.pb(j);
		if(sum==n) {
			result();
		}	
		else if(sum<n) Try(i+1,sum,j);
		sum-=j;
		a.pop_back();	
	}
}


int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		cnt=0;
		Try(1,0,n);
		cout<<cnt<<"\n";
		for(auto x: vp) cout<<x<<" ";
		vp.clear();
		cout<<"\n";
	}
}            