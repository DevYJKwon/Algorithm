#include<bits/stdc++.h>

using namespace std;

string solution(string new_id) {
    string answer = "";
    answer.append(new_id);

    //chage to lower
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    
    //remove stopword
    answer=regex_replace(answer,regex("[~,!,@,#,$,%,^,&,*,(,),=,+,\\[,{,},\\],:,?,,,<,>,/]+"),"");
    
    //remove multiple dot
    answer=regex_replace(answer,regex("[.]{2,}"),".");
    
    //remove first dot
    answer=regex_replace(answer,regex("^[.]"),"");
    
    //check isBlank
    if(answer.size()==0){
        answer.append("a");
    }
    
    //check length
    if(answer.size()>15){
        answer.resize(15);
    }
    
    //remove end dot
    answer=regex_replace(answer,regex("[.]$"),"");
    
    //repeat if lower than 2
    if(answer.size() < 3){
        while(answer.size()<3){
            answer.push_back(answer.back());
        }
    }

    return answer;
}