#include<bits/stdc++.h>
using namespace std;
#define pb push_back


int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
				
		for(int i = 0 ; i < s.length() && n>0 ; i++){
			char tmp = s[s.length()-1];
			int pos = s.length()-1;
			for(int j = s.length()-1 ; j > i ; j--){
				if(s[j] > tmp){
					tmp = s[j];
					pos = j;
				}
			}
			if(tmp > s[i]){
				swap(s[i],s[pos]);
				n--;
			}
		}
		
		cout<<s<<"\n";
	}
}