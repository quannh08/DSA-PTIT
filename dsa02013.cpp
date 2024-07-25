#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int n,p,s;
vector<int> vp,tmp;
vector<vector<int>> res;
int nt[200]={0};
void snt(){
	nt[0]=1;
	nt[1]=1;
	for(int i=2;i*i<=200;i++){
		if(nt[i]==0){
			for(int j=2;j*i<=200;j++){
				nt[i*j]=1;
			}
		}
	}
	return;
}

void Try(int i,int sum,int cnt,int cur){
	for(int j=cur;j<vp.size();j++){
		sum+=vp[j];
		tmp.pb(vp[j]);
		cnt++;
		if(sum > s) {
			tmp.pop_back();
			return;
		}
		if(cnt==n && sum ==s) res.pb(tmp);
		else if(cnt<n && sum < s) Try(i+1,sum,cnt,j+1);
		cnt--;
		tmp.pop_back();
		sum-=vp[j];
	}
}

int main(){
	int t;
	cin >> t;
	snt();
	while(t--){
		cin >> n >> p >> s;
		vp.clear();
		res.clear(); 
		tmp.clear();
		for(int i=p+1;i<=s;i++){
			if(nt[i]==0) vp.pb(i);
		}
		Try(0,0,0,0);
		cout<<res.size()<<"\n";
		for(auto a:res){
			for(auto x : a) cout<<x<<" ";
			cout<<"\n";
		}
	}
}