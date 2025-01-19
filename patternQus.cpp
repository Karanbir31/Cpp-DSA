//patternQus

#include<iostream>
using namespace std;

void rectanglePattern(int r, int c){
    for(int i = 0; i < r; i++){
        for(int j=0; j < c; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){

    rectanglePattern(2,3);
    return 0;
}