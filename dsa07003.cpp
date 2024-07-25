#include<bits/stdc++.h>
using namespace std;
#define ll long long
string cal = "(+-*/";
void resolve(){
    string s;
    getline(cin,s);
    stack<char> st;
    for(int i = 0 ; i<s.length();i++){
        if(cal.find(s[i]) != string::npos) st.push(s[i]);
        if (s[i]==')'){
            int check = 1;
            while(st.top()!='('){
                st.pop();
                check = 0;
            }
            if (check) {
                cout<<"Yes\n";
                return;
            }
            st.pop();
        }
    }
    cout <<"No\n";
    return;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        resolve();
    }
}