#include<bits/stdc++.h>
using namespace std;
int n;
char a[4]={'0','A','B','C'};

void Move(int n,int x,int y){
	if(n==1) cout<< a[x]<<" -> "<<a[y]<<"\n";
	else{
		Move(n-1,x,6-x-y);
		Move(1,x,y);
		Move(n-1,6-x-y,y);
	}
}

int main(){
	cin >> n;
	Move(n,1,3);	
}