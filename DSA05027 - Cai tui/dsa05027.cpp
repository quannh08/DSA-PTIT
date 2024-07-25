#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,v;
    cin >> n >> v;
    vector<int> a(n+1),c(n+1);
    a.pb(0);
    c.pb(0);
    for(int i = 1 ;i <= n ; i++){
        cin >> a[i];
    }
    for(int i = 1 ; i <= n ; i++){
        cin >> c[i];
    }
    int F[n+5][v+5];
    for(int i=0;i<n+5;i++){
        for(int j=0;j<v+5;j++){
            F[i][j] = 0;
        }
    }
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= v ; j++){
            F[i][j]=F[i-1][j];
            if(j >= a[i] && F[i][j] < F[i-1][j-a[i]] + c[i]){
                F[i][j] = F[i-1][j-a[i]] + c[i];
            }
        }
    }
    cout << F[n][v]<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}