#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int length,res=0;
    cin >> length;
    int sequence[1001];
    int dp[1001];
    for(int i=1; i<=length; i++){
        cin >> sequence[i];
    }
    int index=0,gap;
    for(int i=1; i<=length; i++){
        dp[i]=1;
        for(int j=i-1; j>= 1; j--){
            if(sequence[i] > sequence[j]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        res=max(res,dp[i]);
    }
    cout << res;
    return 0;
}