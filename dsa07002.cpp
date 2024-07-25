#include<bits/stdc++.h>
using namespace std;
#define ll long long
stack<int> stk;
void pus(){
    int x;
    cin >> x;
    stk.push(x);
}

void Pop(){
    if(!stk.empty())stk.pop();
}

void print(){
    if(!stk.empty())cout<<stk.top();
    else cout << "NONE";
    cout<<"\n";
}

int main(){
    int n;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        if (s=="PUSH") pus();
        else if(s=="POP") Pop();
        else print();
    }
}