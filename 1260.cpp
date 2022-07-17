#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

using namespace std;

void dfs(int visited[],int index, vector <int> v[]);

void bfs(vector <int> v[], int first, int vNum){
    queue <int> que;
    que.push(first);
    int visited[vNum+1]={1,};
    visited[first]=1;
    while(!que.empty()){
        int currentV= que.front();
        cout << currentV <<" ";
        que.pop();
        for(int i=0; i<v[currentV].size(); i++){
            if(!visited[v[currentV][i]]){
                que.push(v[currentV][i]);
                visited[v[currentV][i]]=1;
            }
        }
    }
}
void setDfs(vector <int> v[], int first, int vNum){
    int visited[vNum+1]={1,};
    visited[first]=1;
    dfs(visited,first,v);
}

void dfs(int visited[], int index,vector <int> v[]){
    visited[index]=1;
    cout << index << " ";
    for(int i=0; i<v[index].size(); i++){
        int child=v[index][i];
        if(!visited[child]){
            dfs(visited,child,v);
        }
    }
}



int main(){
    int first,vNum,eNum;
    cin >> vNum >> eNum >> first;
    vector <int> v[vNum+1];
    for(int i=0; i<eNum; i++){
        int from,to;
        cin >> from >> to;
        v[from].push_back(to);
        v[to].push_back(from);
    }

    for(int i=1; i<vNum+1; i++){
        sort(v[i].begin(),v[i].end());
    }
    setDfs(v,first,vNum);
    cout << endl;
    bfs(v,first,vNum);
    return 0;
}