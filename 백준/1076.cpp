#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

    map<string,string> colorVal;
    map<string,string> colorMul;

    colorVal.insert(pair<string,string>("black","0"));
    colorVal.insert(pair<string,string>("brown","1"));
    colorVal.insert(pair<string,string>("red","2"));
    colorVal.insert(pair<string,string>("orange","3"));
    colorVal.insert(pair<string,string>("yellow","4"));
    colorVal.insert(pair<string,string>("green","5"));
    colorVal.insert(pair<string,string>("blue","6"));
    colorVal.insert(pair<string,string>("violet","7"));
    colorVal.insert(pair<string,string>("grey","8"));
    colorVal.insert(pair<string,string>("white","9"));

    colorMul.insert(pair<string,string>("black",""));
    colorMul.insert(pair<string,string>("brown","0"));
    colorMul.insert(pair<string,string>("red","00"));
    colorMul.insert(pair<string,string>("orange","000"));
    colorMul.insert(pair<string,string>("yellow","0000"));
    colorMul.insert(pair<string,string>("green","00000"));
    colorMul.insert(pair<string,string>("blue","000000"));
    colorMul.insert(pair<string,string>("violet","0000000"));
    colorMul.insert(pair<string,string>("grey","00000000"));
    colorMul.insert(pair<string,string>("white","000000000"));
    
    string color1, color2,color3;
    cin >>color1 >> color2 >>color3;
    string res = colorVal[color1] + colorVal[color2] + colorMul[color3];
    int i;
    if(res[0]=='0'){
        for(i=0; i<res.size()-1; i++){
            if(res[i]!='0'){
                break;
            }
        }
        res.erase(0,i);
    }
    cout << res << endl;
    return 0;
}