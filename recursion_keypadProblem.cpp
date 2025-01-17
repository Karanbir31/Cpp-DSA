//to print all combinations of character with two number to keypad

#include<iostream>
using namespace std;

string keypadArr[] = {
   "," ,"/", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WYXZ"
};

void keypadCombinations(string str, string ans){
    if(str.length() == 0){
        cout<<ans <<endl;
        return;
    }
    char ch = str[0];
    string code = keypadArr[ch - '0'];
        // convert char to int 
    string ros = str.substr(1);

}

int main(){

    return 0;
}