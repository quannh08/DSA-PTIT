#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
void resolve(){
    int n,k;
    cin >> n >> k;
    int c[n+5][k+5];
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= k ; j++){
            c[i][j] = 0;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j <= k ; j++){
            if(j == 0||j == i){
                c[i][j] = 1;
            }
            else{
                c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
            }
        }
    }
    cout << c[n][k] << "\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}