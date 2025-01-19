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

void invertedHalfPyramid(int n = 5){
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
void halfPyramidRotated(int n = 5){
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(i >= j)
                cout<< " * ";
            else
                cout << " - " ;
        }
        cout<<endl;
    }
}
void invertedHalfPyramidNumbers(int n = 5){
    for(int i = n; i > 0; i--){
        for(int j = 1; j <= i; j++){
            cout<<" "<<n+1-i<<" ";
        }
        cout<<endl;
    }
}
void halfPyramidRotatedNumber(int n = 5){
    for(int i = 1; i <= n; i++){
        for(int j = n; j > 0; j--){
            if(i >= j)
                cout<<" "<<i<<" ";
            else
                cout << " - " ;
        }
        cout<<endl;
    }
}

int main(){

    //rectanglePattern(2,3);
    //hollowRectangle(5, 4);
    //invertedHalfPyramid();
    invertedHalfPyramidNumbers();
    cout<<endl;
    halfPyramidRotatedNumber();
    return 0;
}