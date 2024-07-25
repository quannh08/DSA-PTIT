#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int n,a[20][20];
vector<string> res;
char b[100];
int check =0;
int used[20][20];

void Try(int i,int j,int cnt){
	if(i==n-1 && j==n-1){
		check =1;
		string tmp="";
		for(int k=0;k<cnt;k++)tmp+=b[k];
		res.pb(tmp);
	}
	used[i][j]=1;
	if(i<n-1&& a[i+1][j] && !used[i+1][j]){
		b[cnt]='D';
		Try(i+1,j,cnt+1);
	}
	if(j<n-1 && a[i][j+1]&& !used[i][j+1]){
		b[cnt]='R';
		Try(i,j+1,cnt+1);
	}
	if(j>0 && a[i][j-1]&& !used[i][j-1]){
		b[cnt]='L';
		Try(i,j-1,cnt+1);
	}
	if(i>0 && a[i-1][j] && !used[i-1][j]){
		b[cnt]='U';
		Try(i-1,j,cnt+1);
	}
	used[i][j]=0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> a[i][j];
			}
		}
		check = 0;
		memset(used,0,sizeof(used));
		res.clear();
		if(a[0][0]==0) cout<<"-1\n";
		else{
			Try(0,0,0);
			if(check == 0) cout<<"-1\n";
			else{
				sort(res.begin(),res.end());
				for(auto x: res) cout<< x<<" ";
				cout<<"\n";
			}
		}
	}
	return 0;
}