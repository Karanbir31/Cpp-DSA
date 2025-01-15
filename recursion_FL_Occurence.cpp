#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int number, int count = 0 ){
    //to print 1st and last occurence of a number

    if (size == 0){
        return -1 ;
    }
    if(arr[0] == number){
        return count;
    }
    return firstOccurence(arr+1, size -1, number,  ++count);
    //  int prev = lastOccurence(arr+1, size -1, number, count++); //cause error valur of count never change
}

int lastOccurence(int arr[], int size, int number, int count = 0 ){
    //to print 1st and last occurence of a number

    if (size == 0){
        return -1 ;
    }

    int prev = lastOccurence(arr+1, size -1, number, ++count);
    //  int prev = lastOccurence(arr+1, size -1, number, count++); //cause error valur of count never change

    if(arr[0] == number){
        return max(count, prev);
    }
    return prev;
    //prev is -1 or lastOcc count
}

int main(){

    int n = 8;
    int arr[n] = {8, 4, 2, 1, 2, 5, 2, 7};

    cout<< "\nFirst occurence of 2 in array : " << firstOccurence(arr, n , 2);
    cout<< "\nLast occurence of 2 in array : " << lastOccurence(arr, n , 2);
    return 0;
}