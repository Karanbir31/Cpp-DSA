//smallest +ve missing number
// 1<= N <= 10^6  |  -10^6 <= Ai <= 10^6

#include<iostream>
using namespace std;

int smallestMissingNumber(int *arr, int size){
    const int N = 1e6 +2;
    bool check[N] = {false};

    for (int i = 0; i < size ; i++){
        if(arr[i] >= 0){
            check[arr[i]] = true;
        }
    }

    for(int i =0; i < N; i++ ){
        if(!check[i] ){
            return i;
        }
    }
    return -1;
}

int main(){
    int size = 8;
    int arr[size] = {0, -9, 1, 3, -4, 5, 2, 4};

    cout<<"missing number is : "<<smallestMissingNumber(arr, size);

    return 0;
}