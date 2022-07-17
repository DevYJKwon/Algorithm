#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

class Stack{
    vector <int> con;
public:
    void push(int element){
        con.push_back(element);
    }
    int pop(){
        int res;
        if(con.empty()){
            res= -1;
        }
        else{
            res= con.back();
            con.pop_back();
        }
        return res;
    }
    int size(){
        return con.size();
    }
    bool empty(){
        return con.empty()? true: false;
    }
    int top(){
        int res;
        if(con.empty()){
            res=-1;
        }
        else{
            res=con.back();
        }
        return res;
    }
};

int main(){
    vector <string> cvec;
    vector <string> :: iterator it;
    Stack stack;
    int command_size;
    string command;
    smatch match;
    regex push("push (\\d+)");
    cin >> command_size;
    cin.ignore();
    for(int i =0; i<command_size; i++){
        getline(cin,command);
        cvec.push_back(command);
    }
    for(it=cvec.begin(); it != cvec.end(); it++){
        command = *it;
        if(regex_match(command,match,push)){
            int element = stoi(match[1].str());
            stack.push(element);
        }
        else if(command=="pop"){
            cout << stack.pop() << endl;
        }
        else if(command=="size"){
            cout << stack.size() << endl;
        }
        else if(command=="top"){
            cout<<stack.top()<<endl;
        }
        else{
            cout << stack.empty()<<endl;
        }
    }

    return 0;
}