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
void hollowRectangle(int r, int c){
    for(int i = 0; i < r; i++){
        for(int j=0; j < c; j++){
            if( i == 0 || i == r-1 || j == 0 || j == c-1)
                cout<<" * ";
            else 
                cout<<"   ";
        }
        cout<<endl;
    }
}

int main(){

    //rectanglePattern(2,3);
    hollowRectangle(5, 4);
    return 0;
}