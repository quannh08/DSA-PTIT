#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,v;
    cin >> n >> v;
    int a[n+5],c[n+5];

    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    for(int i=1;i<=n;i++){
        cin >> c[i];
    }
    int f[n+5][v+5];
    for(int i=0;i<=n;i++){
        for(int j =0;j<=v;j++){
            f[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=v;j++){
            f[i][j]=f[i-1][j];
            if(j >= a[i] && f[i][j] < f[i-1][j-a[i]]+c[i]){
                f[i][j] = f[i-1][j-a[i]]+c[i];
            }
        }
    }

    cout<<f[n][v]<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}