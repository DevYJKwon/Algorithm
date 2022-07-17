#include <iostream>
#include <vector>

using namespace std;

int main(){
    int size,money,input,res=0;
    cin >> size >> money;
    vector <int> wallet(size);
    for(int i=0; i<size; i++){
        cin >> input;
        wallet.push_back(input);
    }

    while(money>0 && !wallet.empty()){
        int temp=*(wallet.end()-1);
        if(money>=temp){
            while(money>=temp){
                money= money - temp;
                res++;
            }
        }
        wallet.pop_back();
    }
    cout << res << endl;
    return 0;
}