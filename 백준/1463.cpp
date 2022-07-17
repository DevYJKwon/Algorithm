#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int number,count=0,temp;
    cin >> number;
    vector <int> dp(number+1);
    
    dp[1]=0;
    for(int i=2; i<=number; i++){
        dp[i]=dp[i-1]+1;
        if((i%3)==0){
            dp[i]=min(dp[i],dp[i/3]+1);
        }
        if((i%2)==0){
            dp[i]=min(dp[i],dp[i/2]+1);
        }
    }
    cout << dp[number] << endl;
    return 0;
}