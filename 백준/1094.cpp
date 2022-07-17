#include <iostream>

using namespace std;

int main(){
    int x;
    int tempt=0;
    cin >> x;
    while(x!=0){
        if(x%2==1){
            tempt++;
        }
        x=x/2;
    }
    cout << tempt << endl;
    return 0;
}