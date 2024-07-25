#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll f[100];
void fibo(){
    f[0]=0;f[1]=1;
    for(int i=2;i<93;i++){
        f[i]=f[i-1]+f[i-2];
    }
}

int Try(int n,ll k){
    if (n==1) return 0;
    if (n==2) return 1;
    if (k > f[n-2]) return Try(n-1,k-f[n-2]);
    return Try(n-2,k);
}

void resolve(){
    ll n,k;
    cin >> n >> k;
    cout<<Try(n,k)<<"\n";
}

int main(){
    int t;
    cin >> t;
    fibo();
    while(t--){
        resolve();
    }
}