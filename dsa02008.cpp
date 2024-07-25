#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int n,k;
int a[20][20];
int check[20]={0};
vector<int> v;
vector<vector<int>> res;
int cnt=0;
void Try(int i, int sum){
	for(int j=1;j<=n;j++){
		if(check[j]==0){
			check[j]=1;
			sum+=a[i][j];
			v.pb(j);
			if(sum==k && i==n){
				res.pb(v);
				cnt++;
			}
			else if(sum<k && i<n)Try(i+1,sum);
			check[j]=0;
			sum-=a[i][j];
			v.pop_back();
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin >> a[i][j];
		}
	}
	Try(1,0);
	cout << cnt << "\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;	
}