#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <pair<int,int>> dot;
    for(int i =0; i<3; i++){
        int x,y;
        cin >> x>>y;
        dot.push_back(make_pair(x,y));
    }
    return 0;
}