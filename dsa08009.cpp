#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define st first
#define nd second
void resolve(){
	int s,t;
	cin >> s >> t;
	map<int,int> mp;
	queue<pair<int,int>> qe;
	pair<int,int> pr;
	qe.push({s,0});
	while(qe.size())
	{
		pr=qe.front();
		if(pr.st==t){
			cout<< pr.second<<"\n";
			break;
		}
		qe.pop();
		if(pr.st<t && !mp[pr.st*2]){
			mp[pr.st*2]++;
			qe.push({pr.st*2,pr.nd+1});
		}
		if(pr.st>1 && !mp[pr.st-1]){
			mp[pr.st-1]++;
			qe.push({pr.st-1,pr.nd+1});
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