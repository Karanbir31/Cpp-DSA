#include<iostream>
using namespace std;

void subsets(char arr[] , int n){

    for (int i ; i < (1 << n) ; i++){
        // 1 << n means 2^n number of substes possible

        for( int j = 0 ; j < n ; j++){
            if( i & (1 << j)){
                // i = 000, 001, 010, 011, 100(0, 1, 2 ,3 --)
                // i= {},  {c},  {b} , {b,c}, {a}
                cout<< arr[j] << ", ";
            }
        }
        cout<<endl;
    }

}

int main(){
    char arr[3] = {'a', 'b', 'c'};
    subsets(arr, 3);
    return 0;
}