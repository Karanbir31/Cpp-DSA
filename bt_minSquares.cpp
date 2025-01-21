//Break a large rectangle into the minimum number of squares.

#include<iostream>
using namespace std;

int numberOfSquares(int l, int b){
    if( l == 0 || b == 0){
        return 0;
    }
    if(l == b){
        return 1;
    }
    if(l < b){
        //cut mutiple square of side l
        int noSq = b/l;
        return ( noSq + numberOfSquares(l, b - l*noSq) );

    }else{
        //cut mutiple square of side b
        int noSq = l/b;
        return (noSq + numberOfSquares(l- noSq*b, b));
    }
}

int main(){
    int l , b;
    cout<< "Enter the L and B of rect. : ";
    cin>>l>>b;

    int count = numberOfSquares(l, b);
    cout << "number of squares required : " << count;
    return 0;
}