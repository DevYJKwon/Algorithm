#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    if(a==b){
        cout << "==" << endl;
    }
    else if(a < 0 && b >0){
        cout << "<"<< endl;
    }
    else if(a >0 && b<0){
        cout << ">"<< endl;
    }
    else{
        a>b? cout<<">"<<endl : cout <<"<"<<endl;
    }
    return 0;
}