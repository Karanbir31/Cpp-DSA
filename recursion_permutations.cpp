//to print all permutations of a string

#include<iostream>
using namespace std;

void permuation(string str, string ans = ""){
    if(str.length() == 0){
        cout<< ans << endl;
        return;
    }

    for(int i = 0; i < str.length(); i++ ){
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i+1);
        permuation(ros, ans + ch);
    }
}

int main(){

    string str = "ABC";
    permuation("ABC");
    return 0;
}