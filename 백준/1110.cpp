#include <iostream>

using namespace std;

int main(){
    int n,i=0,temp;
    cin>>n;
    temp=n;
    do{
        temp=(temp%10*10)+((temp/10 + temp%10)%10);
        i++;
    }while(n!=temp);
    cout<<i<<endl;
    return 0;
}