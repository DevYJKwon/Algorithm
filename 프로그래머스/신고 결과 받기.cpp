#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector <vector<string>> reported;
    
    for(int i=0; i<id_list.size(); i++){
        answer.push_back(0);
    }
    
    for(int i=0; i<id_list.size(); i++){
        vector <string> temp;
        reported.push_back(temp);
    }
    
    for(int i=0; i<report.size(); i++){
        string from, to,target;
        target=report[i];
        stringstream s(target);
        s>>from>>to;
        for(int j=0; j<id_list.size(); j++){
            if(id_list[j] == to){
                if(find(reported[j].begin(), reported[j].end(),from) == reported[j].end()){
                    reported[j].push_back(from);
                    break;
                }
            }
        }
    }
    for(int i=0; i<reported.size(); i++){
        if(reported[i].size() >= k){ 
            for(int j=0; j<id_list.size(); j++){
                for(int k=0; k<reported[i].size(); k++){
                    if(id_list[j]==reported[i][k]){
                        answer[j]++;
                    }
                }
            }
        }
    }
    
    
    return answer;
}