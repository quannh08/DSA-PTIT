#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll n;
int coins[11]={0,1,2,5,10,20,50,100,200,500,1000};

void greedy(ll money,int &cnt){
	for(int i=10;i>0;i--){
		while(coins[i]<=money){
			money-=coins[i];
			cnt++;
		}
		if(money==0)return;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int cnt=0;
		greedy(n,cnt);
		cout<<cnt<<endl;
	}
}