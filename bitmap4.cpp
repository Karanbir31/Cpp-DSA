//find a unique number in an array in which every number is present twice except one
#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int size){
    int xorsum = arr[0];
    for(int i = 1; i < size; i++){
        xorsum = xorsum xor arr[i];
       // perform xor operation as xor of same number is zero
    }
    return xorsum;
}

int setBit(int n, int pos){
    return (n | (1<<pos));
}

int getBit(int n , int pos){
    return ((n & (1 << pos)) != 0);
}

int posRightMostOne(int n){
    if(n <= 0){
        return -1;
    }
    int pos = 0;
    while(true){
        if(getBit(n, pos)){
            return pos;
        }else{
            pos++;
        }
    }
}

void twoUniqueNumbers(){
    int size = 10;
    int arr[size] = { 2, 4, 6, 7, 4, 5, 6, 5, 2, 9};
    int xorsum = 0;
     for(int i = 0; i < size; i++){
        xorsum = xorsum xor arr[i];
    }
    //now xorsum contain xor of two unique numbers
    /*  7 = 0 1 1 1
        5 = 0 1 0 1
        ^ = 0 0 (1) 0 means only one number has one at 1st position
    */
    int pos = posRightMostOne(xorsum);
    int newxor = 0;
    for(int i = 0; i < size ; i++){
        if(getBit(arr[i], pos) ){
            newxor = newxor ^ arr[i];
        }
    }

    cout<< "\n1st number is : "<<newxor;
    cout<< "\n2nd number is : "<<(xorsum ^ newxor);

}

int uniqueNumberINtriplet(){
    //every number is present 3 times except one
    int size = 10;
    int arr[size] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};
    
    int result = 0;

    for (int i = 0; i < 64; i++){
        // 64 becaus maximum size of number store in int is 2^64 -1
        
        int sum = 0;
        for(int j = 0; j < size; j++){
            if(getBit(arr[j], i)){
                sum++;
            }
        }
        if(sum % 3 != 0){
          result =  setBit(result, i);
        }
    }
    return result;
}

int main(){
    int arr[7] = {1, 2, 3, 5, 1, 2, 3};
    cout << "unique number is : " << uniqueNumber(arr, 7);

    twoUniqueNumbers();

    cout << "\nunique value is in triplet array : " << uniqueNumberINtriplet();
    return 0;
}