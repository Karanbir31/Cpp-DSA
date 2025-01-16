#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int number, int count = 0 ){
    //to print 1st and last occurence of a number

    if (count == size){
        return -1 ;
    }
    if(arr[count] == number){
        return count;
    }
    return firstOccurence(arr, size , number,  ++count);
    //  int prev = lastOccurence(arr+1, size -1, number, count++); //cause error valur of count never change
}

int lastOccurence(int arr[], int size, int number, int count = 0 ){
    //to print 1st and last occurence of a number

    if (count == size){
        return -1 ;
    }

    int prev = lastOccurence(arr, size , number, ++count);
    //  int prev = lastOccurence(arr+1, size -1, number, count++); //cause error valur of count never change

    if((prev == -1) && (arr[count] == number)){
        return count;
    }
    return prev;
    //prev is -1 or lastOcc count
}

int main(){

    int n = 8;
    int arr[n] = {8, 4, 2, 1, 2, 5, 2, 7};

    cout<< "\nFirst occurence of 2 in array : " << firstOccurence(arr, n , 5);
    cout<< "\nLast occurence of 2 in array : " << lastOccurence(arr, n , 5);
    return 0;
}