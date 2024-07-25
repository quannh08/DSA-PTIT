#include<bits/stdc++.h>
using namespace std;

void resolve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    for(int i = 0 ; i <= n - k ; i++){
        cout << *max_element(v.begin()+i,v.begin()+i+k)<<" ";
    }
    cout<<"\n";
}

int main(){

    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}