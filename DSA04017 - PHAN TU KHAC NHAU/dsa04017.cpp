#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n;
    cin >> n;
    vector<int> v1(n),v2(n-1);
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }

    for(int i = 0 ; i < n - 1 ; i++){
        cin >> v2[i];
    }
    int i = 0 ,j = 0;

    int res = -1;
    while(i < n && j < n-1){
        if(v1[i] != v2[j]){
            res = i+1;
            break;
        }
        i++;
        j++;
    }

    cout << res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        resolve();
        cout << "\n";
    }
}