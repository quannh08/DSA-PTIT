#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int check = 0;
    for(int i = 0 ; i < n - 2; i++){
        for(int j = i + 1 ; j < n - 1; j++){
            if(binary_search(v.begin()+j+1,v.end(),k-v[i]-v[j])){
                check = 1;
                break;
            }
        }
    }

    if(check) cout<< "YES\n";
    else cout<<"NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
    }
}