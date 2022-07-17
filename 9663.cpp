#include <iostream>

using namespace std;
int caseTest(int field[][15],int size,int x,int y){
    int num=size;
    field[y][x]=1;
}
int main(){
    int size,cnt=0;
    int x,y;
    cin >> size;

    int field[size][size]={0,};

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            x=i,y=j;
            cnt+=caseTest(field,size,x,y);
        }
    }
    cout<<cnt;
    return 0;
}