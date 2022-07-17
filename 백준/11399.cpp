#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int size,temp;
    cin >> size;
    int num[size];

    for(int i=0; i<size; i++){
        cin>>temp;
        num[i]=temp;
    }
    sort(num,num+size);
    int sum=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<=i; j++){
            sum+=num[j];
        }
    }
    cout << sum<<endl;
    return 0;
}