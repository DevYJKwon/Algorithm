#include <iostream>
#include  <queue>
using namespace std;
void pop(int people[],int index){

}
int main(){
    queue<int> q;
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        q.push(i+1);
    }
    int target,temp;
    cin >> target;
    cout <<"<";
    while(q.size()!=1){
        for(int i=0; i<target-1; i++){
            temp=q.front();
            q.pop();
            q.push(temp);
        }
        cout << q.front() <<", ";
        q.pop();
    }
    cout<<q.front();
    cout << ">"<<endl;
    return 0;
}