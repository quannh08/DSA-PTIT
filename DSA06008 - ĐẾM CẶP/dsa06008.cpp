#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int countPair(int x,int b[],int n,int count[]){
	if(x == 0)return 0;
	if(x == 1)return count[0];
	int *tmp = upper_bound(b , b + n ,x);
	int res = (b + n) - tmp;
	res += count[0] + count[1];
	if(x == 2){
		res -= count[3] + count[4];
	}
	else if(x == 3){
		res += count[2];
	}
	return res;
}

void resolve(){
	int m,n;
	cin >> m>> n;;
	int a[m+5],b[n+5];
	for(int i = 0 ; i < m ; i++){
		cin >> a[i];
	}
	for(int i = 0 ; i < n ; i++){
		cin >> b[i];
	}
	sort(b , b+n);
	int cntB[10] = {0};

	for(int i = 0 ; i < n ; i++){
		if(b[i]<5)cntB[b[i]]++;
	}
	int cnt=0;	
	for(int i = 0 ; i < m ; i++){
		cnt+=countPair(a[i],b,n,cntB);
	}
	cout<<cnt<<"\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}