#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int res=0;
int a[10][10];

int col[10],d1[1000],d2[1000];
void init(){
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin >> a[i][j];
		}
	}
}

void result(int sum){
	res=max(res,sum);
}

void Try(int i,int sum){
	for(int j=1;j<=8;j++){
		if(col[j]==0 && d1[i-j+8]==0 && d2[i+j-1]==0){
			sum+=a[i][j];
			col[j]=d1[i-j+8]=d2[i+j-1] = 1;
			if(i==8) result(sum);
			else Try(i+1,sum);
			
			col[j]=d1[i-j+8]=d2[i+j-1]=0;
			sum-=a[i][j];
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(col,0,sizeof(col));
		memset(d1,0,sizeof(d1));
		memset(d2,0,sizeof(d2));
		init();
		res=0;
		Try(1,0);
		cout<<res<<"\n";
	}
}