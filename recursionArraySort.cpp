#include<iostream>
using namespace std;

bool checkArraySorted(int arr[], int n){
    // * strictly increaqsing we need different function for decreasing 
    if(n == 1){
        return true;
    }
    return ( (arr[0] < arr[1]) && checkArraySorted(arr+1, n-1) );

}

int main(){
    int n =6;
    int arr[n] = {2, 7, 8, 9, 10, 5};
    cout<< "is array sorted (increasing) : " << checkArraySorted(arr, n);
    return 0;
}