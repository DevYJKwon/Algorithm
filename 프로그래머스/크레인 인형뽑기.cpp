#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer=0;
    vector <int> basket;

    for(int i=0; i<moves.size(); i++){
        int currentMove = moves[i]-1;
        int cur = -1;
        for(int z=0; z<board[0].size(); z++){
            if(board[z][currentMove]==0){
                continue;
            }
            cur = z;
            break;
        }
        if(cur == -1){
            continue;
        }
        basket.push_back(board[cur][currentMove]);
        board[cur][currentMove]=0;
        if(basket.size() >1){
            if(basket.back() == basket[basket.size()-2]){
                answer+=2;
                basket.pop_back();
                basket.pop_back();
            }
        }
    }
    return answer;
}