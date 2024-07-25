#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

deque<int> deq;
void pushBack(){
	int x;
	cin >> x;
	deq.pb(x);
	return;
}

void printFront(){
	if(deq.empty()){
		cout<<"NONE\n";
		return;
	}
	cout << deq.front()<<"\n";
}

void popFront(){
	if (deq.empty()) return;
	deq.pop_front();
}

void pushFront(){
	int x;
	cin>> x;
	deq.push_front(x);
}

void popBack(){
	if(deq.empty()) return;
	deq.pop_back();
}

void printBack(){
	if(deq.empty()){
		cout<<"NONE\n";
		return;
	}
	cout<<deq.back()<<"\n";
}

int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		if(s=="PUSHBACK") pushBack();
		else if(s=="PUSHFRONT") pushFront();
		else if(s=="PRINTFRONT") printFront();
		else if(s=="PRINTBACK") printBack();
		else if(s=="POPBACK") popBack();
		else popFront();
	}
	return 0;
}