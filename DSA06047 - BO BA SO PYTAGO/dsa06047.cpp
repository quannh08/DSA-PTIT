#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    bool check = 0;
    for(int i = 0 ; i < n - 2 ; i++){
        for(int j = i + 1 ; j < n - 1 ; j++){
            ll tmp = sqrt(pow(v[i],2) + pow(v[j],2));
            if(1LL*tmp*tmp == 1LL*pow(v[i],2) + pow(v[j],2) && binary_search(v.begin()+j+1,v.end(),tmp)){
                check = 1;
                break;
            }
        }
    }

    if(check) cout << "YES";
    else cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
        cout<<"\n";
    }
}