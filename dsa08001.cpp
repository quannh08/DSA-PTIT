#include<bits/stdc++.h>
using namespace std;

void resolve(){
	int n;
	cin >> n;
	queue<int> qe;
	while(n--){
		int test;
		cin >> test;
		if(test == 1){
			cout << qe.size()<<"\n"; 
		}
		else if(test == 2){
			if (qe.empty()){
				cout<<"YES\n";
			}
			else cout<<"NO\n";
		}
		else if(test == 3){
			int tmp ;
			cin >> tmp;
			qe.push(tmp);
		}
		else if(test == 4){
			if(!qe.empty()){
				qe.pop();
			}
		}
		else if(test ==5){
			if(qe.empty()) cout<<"-1\n";
			else cout<<qe.front()<<"\n";
		}
		else {
			if(qe.empty()) cout<<"-1\n";
			else cout<<qe.back()<<"\n";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		resolve();
	}
}