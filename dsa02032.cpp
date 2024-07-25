#include<bits/stdc++.h>
using namespace std;

int n, x, a[20],y[20];
vector<string> v;
void init(){
	cin >> n >> x;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
}

void Result(int i){
	string res = "{";
	for(int j = 0 ; j <= i ; j++){
		res += to_string(y[j])+" ";
	}
	res.pop_back();
	res += "}";
	v.push_back(res);
}

void Back_track(int i,int sum,int cur){
	for(int j = cur ; j < n ; j++){
		if(sum + a[j] <= x){
			y[i] = a[j];
			sum += a[j];
			if(sum == x) Result(i);
			else Back_track(i+1,sum,j);
			sum-=a[j];
		}
			
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		init();
		Back_track(0,0,0);
		if(v.size()==0) cout<<"-1\n";
		else{
			cout<<v.size()<<' ';
			for(auto x:v){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	
}