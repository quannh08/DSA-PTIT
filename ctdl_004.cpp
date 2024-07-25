#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> v(n+1);
int cnt;
int cntK=0;

void Try(int i){
	
	for(int j=i+1;j<=n;j++){
		if(v[j]> v[i]){
			cntK++;
			}
			else Try(j);
			cntK--;
		}
	}
}

int main(){
	cnt = 0;
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		cin >> v[i];
	}
	v[0]=v[1]-1;
	Try(0);
	cout<<cnt;
}