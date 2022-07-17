#include <iostream>

using namespace std;

int main(){
    int col,row;
    cin >> col >> row;
    char field[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> field[i][j];
        }
    }
    int min_tempt=NULL;
    int Xgap=col-8, Ygap=row-8;
    char prevX=NULL,prevY=NULL;
    int tempt;
    for(int i=0; i< Xgap; i++){
        for(int j=0; j<Ygap; j++){
            for(int x=0; x < col; x++){
                for(int y=0; y < row; y++){
                    if(prevX==NULL){
                    prevX=field[Ygap+j][Xgap+i];
                    }
                    else{
                        if(prevX=='B'){
                            if(field[i+y][j+x] != 'W'){
                                field[i+y][j+x]='W';
                                tempt++;
                            }
                        }
                        else{
                            if(field[i+y][j+x] != 'B'){
                                field[i+y][j+x]='B';
                                tempt++;
                            }
                        }
                    }
                }
                if(field[i+y][j+x] =='W'){
                    prevX='W'
                }
                else{
                    prevX='B'
                }
            }
        }
    }
    return 0;
}