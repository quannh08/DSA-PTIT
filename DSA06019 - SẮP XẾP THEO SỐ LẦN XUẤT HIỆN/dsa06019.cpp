#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(int a,int b){
	if(mp[a]==mp[b]) return a<b;
	return mp[a]>mp[b];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		
		for(int i = 0 ; i < n ; i++){
			cin >> v[i];
			mp[v[i]]++;
		}
		sort(v.begin(),v.end(),cmp);
		for(int i = 0 ; i < n ; i++){
			cout<< v[i]<<" ";
		}
		mp.clear();
		cout<<endl;
	}
}