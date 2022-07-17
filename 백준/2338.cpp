#include <iostream>
#include <string>
using namespace std;

string calPlus(string a, string b){
    string res="";
    bool carry = false; //캐리가 있는지 판별
    for(int i=b.length()-1; i>=0; i--){ // 뒷 자리부터 한 자리씩 계산
        int temp;
        carry? temp = int(a[i]) + int(b[i]) +1: temp = int(a[i]) + int(b[i]);
        if(temp > 9){ // 결과가 두 자리면 캐리를 true로 바꿈
            carry=true;
            res.insert(0,to_string(temp%10));
        }
        else{
            carry=false;
        }
    }
    if(carry == true){
        res.insert(0,"1");
    }
    return res;
}

string calSub(string a, string b){

}

string calMul(string a, string b){

}

int main(){
    string a,b,res; //1000자리 수는 정수형으로 받을 수 없다고 판단 문자열로 계산
    cin >> a >> b;
    if((a.length() > b.length()) && stoi(a,0) > stoi(b,0)){ // a를 큰 수로 만듦 
        res=calPlus(a,b); 
        cout << res<<endl;
        /*res=calSub(a,b);
        cout << res<<endl;
        res=calMul(a,b);
        cout << res<<endl;
        */
    }
    else{
        res=calPlus(b,a); 
        cout << res<<endl;
       /* res=calSub(b,a);
        cout << res<<endl;
        res=calMul(b,a);
        cout << res<<endl;
        */
    }

    return 0;
}