#include <iostream>

using namespace std;

int main(){
    int size,temp;
    cin >> size;
    int dp[12]={0,1,2,4,};
    for(int i=4; i<13; i++){
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
    }
    for(int i=0; i<size; i++){
        cin >> temp;
        cout<<dp[temp]<<endl;
    }
    return 0;
}