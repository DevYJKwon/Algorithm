#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

#define MAX 51

using namespace std;


bool visited[MAX][MAX]={false,};
int map[MAX][MAX]={0,};
int dx[]={0,-1,1,0};
int dy[]={1,0,0,-1};

int bfs(pair <int,int> start,int size){
    int res=0;
    queue <pair<int,int>> q;
    q.push(start);
    visited[start.first][start.second]=true;
    while(!q.empty()){
        int y = q.front().first;
        int x= q.front().second;
        q.pop();
        res++;
        for(int i=0; i<4; i++){
            int ny= y+dy[i];
            int nx= x+dx[i];
            if(ny >= 0 && nx >= 0 && ny < size && nx < size){
                if(map[ny][nx] && !visited[ny][nx]){
                    visited[ny][nx]=true;
                    q.push(make_pair(ny,nx));
                }
            }
        }
    }
    return res;
}

int main(){
    int size;
    cin >> size;
    vector <int> v;
    vector <int> :: iterator it;

    for(int i=0; i<size; i++){
        string row;
        cin >> row;
        for(int j=0; j<size; j++){
            map[i][j] = row[j]-'0';
        }
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(map[i][j] && !visited[i][j]){
                v.push_back(bfs(make_pair(i,j),size));
            }
        }
    }

    sort(v.begin(),v.end());
    cout << v.size() << endl;
    for(it=v.begin(); it != v.end(); it++){
        cout << *it << endl;
    }
    return 0;
}