#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
bool comp(string str1,string str2){
    if(str1.length() == str2.length()){
        return str1 < str2;
    }
    return str1.length() < str2.length();
}

int main(){
    vector<string> words;
    vector<string>::iterator it;
    vector<string>::iterator end;
    int size;
    string word;
    cin >> size;
    for(int i=0; i<size; i++){
        word;
        cin>>word;
        words.push_back(word);
    }
    sort(words.begin(),words.end(),comp);
    end=unique(words.begin(),words.end()); //중복 제거
    for(it=words.begin(); it!=end; it++){
        cout << *it << endl;
    }
    return 0;
}