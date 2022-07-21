#include <string>
#include <vector>

using namespace std;
int check(int i){
    int res=0;
    switch(i){
        case 6:
            res=1;
            break;
        case 5:
            res=2;
            break;
        case 4:
            res=3;
            break;
        case 3:
            res=4;
            break;
        case 2:
            res=5;
            break;
        default:
            res=6;
            break;
    }
    return res;
}
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector <int> :: iterator  it;
    
    int zero=0,win=0;
    for(int i=0; i<6; i++){
        if(lottos[i] == 0){
            zero++;
        }
        else{
            for(it=win_nums.begin(); it!=win_nums.end(); it++){
                if(lottos[i]==*it){
                    win++;
                    win_nums.erase(it);
                    break;
                }   
            }   
        }
    }
    answer.push_back(check(zero+win));
    answer.push_back(check(win));
    return answer;
}