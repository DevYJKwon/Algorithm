#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <int> vec;
    vector <int>::iterator it;
    for(int i=1; i<=10000; i++){
        vec.push_back(i);
    }
    for(int num=1; num<=10000; num++){
        int temp=(num/10000)+(num%10000/1000)+(num%1000/100)+(num%100/10)+(num%10)+num;
        it =find(vec.begin(), vec.end(),temp);
        if(it != vec.end()){
            vec.erase(it);
        }
    }
    for(it=vec.begin(); it!=vec.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}
