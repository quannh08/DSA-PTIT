#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int a[100][100];

int n;
int check = 1;
char res[100];
void Try(int i,int j,int cnt){
    if(i == n-1 && j == n-1){
        check = 0;
        for(int i =0;i<=cnt;i++){
            cout << res[i];
        }
        cout<<" ";
    }
    if(i<n-1 && a[i+1][j]==1){
        res[cnt] ='D';
        Try(i+1,j,cnt+1);
    }
    if(j<n-1 && a[i][j+1]==1){
        res[cnt] ='R';
        Try(i,j+1,cnt+1);
    }
    
}

void resolve(){
    
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    check = 1; 
    if(a[0][0]==0){
        cout<<"-1\n";
        return;
    }
    else Try(0,0,0);
    if(check) cout<<"-1";
    cout<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}