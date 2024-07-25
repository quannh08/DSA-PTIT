#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

queue<int> qe;
void Push(){
	int x;
	cin >> x;
	qe.push(x);
	return;
}

void Pop(){
	if(qe.empty()) return;
	qe.pop();
	return;
}

void printFront(){
	if(qe.empty()) {
		cout<<"NONE\n";
		return;
	}
	cout<<qe.front()<<"\n";
}

int main(){
	int n;
	cin >> n;
	while(n--){
		string str;
		cin >> str;
		if(str=="PUSH") Push();
		else if(str=="POP") Pop();
		else printFront();
	}
}