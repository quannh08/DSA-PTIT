#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<int> vp;
void pus(){
    int x;
    cin >> x;
    vp.push_back(x);
    return;
}

void Pop(){
    vp.pop_back();
    return;
}
void show(){
    if (vp.size()==0) cout << "empty";
    for(int x:vp){
        cout << x <<" ";
    }
    cout<<"\n";
}

int main(){
    string s;
    while (cin >> s){
        if(s == "show") show();
        else if (s == "pop")Pop();
        else pus();
    }
    return 0;
}