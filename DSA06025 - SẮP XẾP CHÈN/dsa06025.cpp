#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        cout << "Buoc "<< i <<":";
        v.push_back(a[i]);
        sort(v.begin(),v.end());
        for(int i = 0 ; i < v.size() ; i++){
            cout << " " << v[i];
        }
        cout << "\n";
    }

}