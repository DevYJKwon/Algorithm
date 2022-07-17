#include <iostream>

using namespace std;

int dp[41]={0,1,1};

int main(){
    int size,input;
    for(int i=3; i<41; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cin >> size;
    int num[size];
    for(int i=0; i<size; i++){
        cin >> input;
        if(input==0){
            cout <<"1 0"<<endl;
        }
        else{
            cout << dp[input-1] <<" "<<dp[input]<<endl;
        }
    }
    return 0;
}