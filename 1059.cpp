#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size,target,res=0;
    cin >> size;
    int set[size];
    for(int i=0; i<size; i++){
        cin >> set[i];
    }
    cin >> target;
    sort(set,set+size);
    for(int i=0; i<size; i++){
        if(target < set[i]){
            int prev,end;
            if(size ==1){
                prev=0;
                end=set[i];
            }
            else{
                prev=set[i-1];
                end=set[i];
            }
            res=(target-prev)*(end-target)-1;
            break;
        }
        else if(target == set[i]){
            break;
        }
        else{
            continue;
        }
    }

    cout << res;
    return 0;
}