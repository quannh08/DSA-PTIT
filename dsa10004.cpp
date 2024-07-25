#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int n,nv;
int a[1005][1005];

int check(){
    int d=0;
    for(int i=1 ;i<=n;i++){
        int s=0;
        for(int j=1;j<=n;j++){
            s+=a[i][j];
        }
        if(s%2)d++;
    }
    
    if (d==2) return 1;
    if( d>0) return 0;
    return 2;
}


int main(){
	int t;
	cin>> t;
	while(t--){
		cin >> n >> nv;
		int x, y;
		memset(a,0,sizeof(a));
		for(int i=1;i<=nv;i++){
			cin >> x >> y;
			a[x][y]=a[y][x]=1;
 		}	
 		
 		cout<<check()<<"\n"; 
	}