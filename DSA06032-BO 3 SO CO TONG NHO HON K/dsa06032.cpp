#include<bits/stdc++.h>
using namespace std;


void resolve(){
    int n,k;
    cin >> n >> k;
    int a[n+5];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    sort(a , a + n);
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            int x = lower_bound(a + j + 1 , a + n , k - a[i] - a[j]) - a;
            cnt += x - j - 1;
        }
    }
    cout<<cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        resolve();
        cout<<"\n";
    }
}