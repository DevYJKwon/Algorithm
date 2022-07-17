#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int dy[] = {0,0,-1,1};
int dx[] = {-1,1,0,0};
bool visited [51][51];
int field[51][51];
int row,col;

void dfs(int y,int x){
    int nx,ny;
    for(int i=0; i<4; i++){
        nx=x+dx[i];
        ny=y+dy[i];
        if(nx < col && ny < row && nx >= 0 && ny >= 0){
            if(field[ny][nx] && !visited[ny][nx]){
                visited[ny][nx]=true;
                dfs(ny,nx);
            }
        }
    }
}


int main(){
    int testcase,numOfCabbage,x,y;
    cin >> testcase;
    
    for(int t=0; t<testcase; t++){
        memset(visited,false,sizeof(visited));
        memset(field,0,sizeof(field));
        cin >> col >> row >> numOfCabbage;
        int warms=0;
        for(int i=0; i<numOfCabbage; i++){ 
            cin >> x >>y;
            field[y][x]=1;
            
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(field[i][j] && !visited[i][j]){
                    warms++;
                    visited[i][j]=true;
                    dfs(i,j);
                }
            }
        }
        cout<< warms << endl;
    }
}