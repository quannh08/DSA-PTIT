#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105][105];
int cnt ;
int m,n;

void Try(int i,int j){
    if(i==m-1 && j == n-1){
        cnt++;
        return;
    }
    if(i<m-1){
        Try(i+1,j);
    }
    if(j<n-1){
        Try(i,j+1);
    }
}

void resolve(){
    cin >> m >> n;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    cnt = 0;
    Try(0,0);
    cout << cnt <<"\n";
    
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}