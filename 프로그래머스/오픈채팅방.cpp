#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map <string,string> m; //id,name
    
    for(int i=0; i<record.size(); i++){
        stringstream s1(record[i]);
        string act,id,name;
        s1 >> act >> id >> name;
        if(name!=""){
            m[id]=name;
        }   
    }

    for(int i=0; i<record.size(); i++){
        stringstream s1(record[i]);
        string act,id;
        s1 >> act >> id;
        string temp="";
        if(act =="Enter"){
            temp.append(m[id]+"님이 들어왔습니다.");
        }
        else if(act == "Leave"){
            temp.append(m[id]+"님이 나갔습니다.");
        }
        else{
            continue;
        }
        answer.push_back(temp);
    }
    return answer;
}