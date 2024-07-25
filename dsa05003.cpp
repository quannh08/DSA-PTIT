#include <iostream>
#include <queue>
using namespace std;

int N,s,t,A[1005][1005],pa[1005];
bool visited[1005];

void init(){
    for(int i=1;i<=N;i++){
        pa[i]=0;
        visited[i]=false;
    }
}

void in(){
    int u=t;
    while(u){
        cout<<u<<" ";
        u=pa[u];
    }
    cout<<endl;
}
void DFS(int u){
    visited[u]=true;
    for(int v=1;v<=N;v++){
        if(A[u][v]&&!visited[v]){
            pa[v]=u;
            DFS(v);
        }
    }
}
void bfs(){
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=1;v<=N;v++){
            if(A[u][v]&&!visited[v]){
                pa[v]=u;
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main(){
    cin>>N>>s>>t;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++) cin>>A[i][j];
    }
    init();
    DFS(s);
    if(!visited[t]) cout<<"no path";
    else{
        cout<<"DFS path: ";
        in();
        init();
        bfs();
        cout<<"BFS path: ";
        in();
    }
    return 0;
}