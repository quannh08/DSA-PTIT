#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void resolve(){
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    vector<int> v1(n1), v2(n2), v3(n3);

    for(int i = 0 ; i < n1 ; i++){
        cin >> v1[i];
    }
    for(int i = 0 ; i < n2 ; i++){
        cin >> v2[i];
    }
    for(int i = 0 ; i < n3 ; i++){
        cin >> v3[i];
    }

    int i = 0, j = 0, k = 0;
    bool check = 1;
    while(i < n1 && j < n2 && k < n3){
        if(v1[i] == v2[j] && v2[j] == v3[k]){
            check = 0;
            cout << v1[i] << " ";
            i++; j++; k++;
        }

        else if(v1[i] < v2[j]){
            i++;
        }
        else if(v2[j] < v3[k]){
            j++;
        }
        else k++;
    }
    if(check) cout << "-1\n";
    cout << "\n";

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