#include <iostream>
#include <queue>

using namespace std;

int col, row;
bool visited[101][101]={false,};
int count[101][101]={0,};
int map[101][101]={0,};

int dy[] = {0,0,-1,1};
int dx[] = {-1,1,0,0};

void bfs(int sx, int sy){
    queue <pair<int,int>> q;
    q.push(make_pair(sy,sx));
    visited[sy][sx]=true; 
    int x,y;
    while(!q.empty()){
        y=q.front().first;
        x=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx=x+dx[i];
            int ny=y+dy[i];
            if(nx < col && ny < row && nx >= 0 && ny >= 0){
                if(map[ny][nx] && !visited[ny][nx]){
                    visited[ny][nx]=true;
                    q.push(make_pair(ny,nx));
                    count[ny][nx]=count[y][x]+1;
                }
            }
        }
    }
}

int main(){
    cin >> row >> col;

    for(int i=0; i<row; i++){
        string line;
        cin >> line;
        for(int j=0; j<col; j++){
            map[i][j]=line[j]-'0';
        }
    }
    bfs(0,0);
    cout << count[row-1][col-1]+1;
    return 0;
}