//to print substring, and substring with ASCII codes

#include<iostream>
using namespace std;

void printSubString(string str, string ans = ""){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    printSubString(str.substr(1), ans);
    printSubString(str.substr(1), ans + ch);
}

void printSubStringWithASCII(string str, string ans = ""){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }

    char ch = str[0];
    int asciiCode = ch;
    printSubStringWithASCII(str.substr(1), ans);
    printSubStringWithASCII(str.substr(1), ans + ch);
    printSubStringWithASCII(str.substr(1), ans + to_string(asciiCode));
}

int main(){
    string str = "ABC";
    
    cout<< "Substrings of ABC : " <<endl;
    printSubString(str);

    cout<< "SubString of ABC With ASCII code : "<<endl;
    printSubStringWithASCII(str);
    return 0;
}