#include <iostream>
#include <string>

using namespace std;

int main(){
    int size;
    cin >> size;
    string files[size];
    for(int i=0; i<size; i++){
        cin >> files[i];
    }
    string pattern=files[0];
    
    for(int i=1; i<size; i++){
        if(pattern != files[i]){
            for(int j=0; j < pattern.length(); j++){
                if(pattern[j]!= files[i][j]){
                    pattern.replace(j,1,"?");
                }
            }
        }
    }
    cout << pattern;
    return 0;
}