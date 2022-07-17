#include <iostream>
#define R 1
#define G 2
#define B 3
using namespace std;

int recent;
//R=1, G=2, B=3;

int min(int x,int y, int z){
    int res;
    if(recent == R){
        x=1001;
    }
    else if(recent == G){
        y=1001;
    }
    else if(recent == B){
        z=1001;
    }

    if(x < y){
        res = x;
        recent = R;
    }
    else {
        res = y;
        recent = G;
    }
    if(res > z){
        res = z;
        recent = B;
    }
    return res;
}
int main(){
    int res=0;
    int size;
    cin >> size;
    int cost[size][3];

    int dp[size]={0,};

    for(int i=0; i<size; i++){
        for(int j=0; i<3; j++){
            cin >> cost[size][j];
        }
    }

    for(int i=0; i<size; i++){
        res+=min(cost[size][0],cost[size][1],cost[size][2]);
    }
    cout << res;
    return 0;
}