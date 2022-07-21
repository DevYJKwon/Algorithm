#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int solution(string s) {
    int answer = 2000;
    vector <string> v;
    
    if(s.size()<2){
        v.push_back(s);
    }
    
    for(int pattern_size=1; pattern_size<s.size(); pattern_size++){
        string temp="";
        int freq=0; 
        for(int i=pattern_size; i<s.size(); i+=pattern_size){
            
            string pattern=s.substr(i-pattern_size,pattern_size);
            string cur=s.substr(i,pattern_size);
            
            if(pattern == cur){
                freq++;
                if(i+pattern_size >= s.size()){
                    temp.append(to_string(++freq)+pattern); 
                }
            }
            else{
                if(freq<1){
                  temp.append(pattern);    
                }
                else{
                    temp.append(to_string(++freq)+pattern);  
                }
                freq=0;
                if(i+pattern_size >= s.size()){
                    temp.append(cur);
                }
            }
        } 
        v.push_back(temp);
    }
    
    for(int i=0; i<v.size(); i++){
        answer=min(answer,v[i].size()); 
    }
    return answer;
}