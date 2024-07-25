#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    map<int,int> cnt;
    ll res=0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }

    for(int i = 0 ; i < n ; i++){
        if(a[i] == k-a[i]){
            res +=1LL* cnt[a[i]] * (cnt[a[i]] - 1) / 2;
            cnt[a[i]]=0;
        }
        else {
            res +=1LL* cnt[a[i]] * cnt[k-a[i]];
            cnt[a[i]] = 0;
            cnt[k-a[i]] = 0;
        }
    }
    cout << res <<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}