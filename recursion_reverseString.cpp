// print a string in reverse order
//replace pi with 3.14 in a string

#include<iostream>
using namespace std;

void reverseString(string str){
    if(str.length() == 0){
        return;
    }
    string ros = str.substr(1);
    reverseString(ros);

    cout<<str[0];
}

void replacePI(string str){
    if(str.length() == 0){
        return;
    }
    string ros;
    if(str[0] == 'p' && str[1] == 'i'){
        cout<<"3.14";
         ros = str.substr(2);
    }else{
        cout<<str[0];
         ros = str.substr(1);
    }
    replacePI(ros);

}

int main(){
    string str = "KARANBIR";
    cout<<"Reverse Sting : ";
    reverseString(str);

    str= "pippxxppixipi";
    cout<<"\nReplace pi with 3.14 : ";
    replacePI(str);
    return 0;
}