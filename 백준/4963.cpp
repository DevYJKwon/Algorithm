#include <iostream>
#include <vector>


using namespace std;

vector <int> map[51];
bool visited[51];

int main(){
    int col,row,tick;
    do{
        cin >> col >> row;

        for(int i=1; i<=row; i++){
            for(int j=1; j<=col; j++){
                cin >> tick;
                map[i].push_back(tick);
            }
        }
    }while(col!=0&&row!=0)
    return 0;
}