#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
    char num[10]="";
    cin.getline(num,10,'\n');
    int res=0;
    for(int i=0; i<sizeof(num); i++){
        if((int)num[i] >= '0' && (int)num[i] <= '9'){
            res+=(int)pow((int)num[i]-'0',2); 
        }
        else{
            continue;
        }
    }
    cout << res%10 <<endl; 
    return 0;
}