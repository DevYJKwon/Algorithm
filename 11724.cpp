#include <iostream>
#include <vector>
#include <queue>

using namespace std;
vector <int> v[1001];
bool visited[1001]={false,};

void bfs(int start){
    queue <int> q;
    q.push(start);
    visited[start]=true;
    while(!q.empty()){
        int currentV=q.front();
        q.pop();
        for(int i=0; i<v[currentV].size(); i++){
            if(!visited[v[currentV][i]]){
                q.push(v[currentV][i]);
                visited[v[currentV][i]] = true;
            }
        }

    }
}
int main(){

    int vertex,edge;
    int from,to;
    int res=0;
    cin >> vertex >> edge;
    for(int i=0; i<edge; i++){
        cin >> from>>to;
        v[from].push_back(to);
        v[to].push_back(from); 

    }
    for(int i=1; i<=vertex; i++){
        if(!visited[i]){
            bfs(i);
            res++;
        }
    }
    cout << res;
}