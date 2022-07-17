#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
int min(int a ,int b){
    if(a==-1){
        return b;
    }
    else{
        return a>b? b:a;
    }
}
int bfs(pair<int,int> start, vector<vector<int>> visited, int row, int col){
    int day=0;
    pair<int,int> level = make_pair(-1,-1);
    queue <pair<int,int>> que;
    que.push(start);
    while(!que.empty()){
        pair<int,int> current=que.front();
        que.pop();
        int y=current.first, x=current.second;
        if(x-1 >= 0 && visited[x-1][y] == 0){
            visited[x-1][y]=visited[x][y]+1;
            que.push(make_pair(x-1,y));
        }
        if(y-1 >= 0 && visited[x][y-1] == 0){
            visited[x][y-1]=visited[x][y]+1;
            que.push(make_pair(x,y-1));
        }
        if(x+1 < col && visited[x+1][y] == 0){
            visited[x+1][y]=visited[x][y]+1;
            que.push(make_pair(x+1,y));
        }
        if(y+1 < row && visited[x][y+1] == 0){
            visited[x][y+1]=visited[x][y]+1;
            que.push(make_pair(x,y+1));
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(visited[i][j]==0){
                day=-1;
                return day;
            }
            if(visited[i][j] > day){
                day = visited[i][j];
            }
        }
    }
    return day;
}
int main(){
    int col,row,day=-1;
    cin >> col >> row;
    vector <vector<int>> tomatoCon;
    vector <pair<int,int>> startPoints;
    vector <pair<int,int>> :: iterator startIt;
    int input;
    for(int i=0; i < row; i++){
        vector <int> rowCon;
        for(int j=0; j<col; j++){
            cin >> input;
            if(input==1){
                startPoints.push_back(make_pair(i,j));
            }
            rowCon.push_back(input);
        }
        tomatoCon.push_back(rowCon);
    }

    for(startIt=startPoints.begin(); startIt!=startPoints.end(); startIt++){
        day=min(day,bfs(*startIt,tomatoCon,row,col));
    }
    
    day==-1? cout<<day:cout<<day-1;

    return 0;
}