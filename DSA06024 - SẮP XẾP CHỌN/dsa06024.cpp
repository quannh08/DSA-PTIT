#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0 ;i < n ; i++){
        cin >> a[i];
    }

    for(int i = 0 ; i < n - 1 ; i++){
        cout << "Buoc " << i+1 <<":";
        int tmp = a[i];
        int pos = i;
        for(int j = i + 1 ; j < n ; j++){
            if(tmp > a[j]){
                tmp = a[j];
                pos = j;
            }
        }
        swap(a[i],a[pos]);
        for(int j = 0 ; j < n ; j++){
            cout << " " << a[j];
        }
        cout << "\n";
    }

}