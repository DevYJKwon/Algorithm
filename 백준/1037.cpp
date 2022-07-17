#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int size,num;
    cin >> size;
    vector <int> div;
    for(int i=0; i<size; i++){
        cin >> num;
        div.push_back(num);
    }
    sort(div.begin(),div.end());
    if(div.size()==1){
        cout << div.front()*div.front() <<endl;
    }
    else{
        cout << div.front()*div.back() << endl;
    }
    return 0;
}