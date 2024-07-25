#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

struct Node{
	int val;
	Node* right,*left;
};

typedef Node* Tree;

Tree createTree(int a){
	Tree res = new Node;
	res -> val=a;
	res->right=res->left=NULL;
	return res;
}

void buildTree(Tree &A,char c,int par,int child)
{
	if(A!=NULL){
		if(A->val==par){
			if(c=='L'){
				A-> left=createTree(child);
			}
			else {
				A->right=createTree(child);
			}
		}
		buildTree(A->left,c,par,child);
		buildTree(A->right,c,par,child);
	}
}

void levelOrder(Tree &A){
	queue<Tree> q;
	Tree top;
	q.push(A);
	while(q.size()){
		top=q.front();
		q.pop();
		cout<<top->val<<' ';
		if(top->left!=NULL){
			q.push(top->left);
		}
		if(top->right!=NULL){
			q.push(top->right);
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Tree root=NULL;
		int par,child;
		char c;
		cin >> par >> child >> c;
		root=createTree(par);
		buildTree(root,c,par,child);
		n--;
		while(n--){
			cin >> par >> child >> c;
			buildTree(root,c,par,child);
		}
		levelOrder(root);
		cout<<"\n";
	}
}