#include<iostream>
using namespace std;

int checkPowerOfTwo(int n){
    // n =  6 (0110)     n = 8 (1000)
    // n-1 =5 (0101)     n-1 =7 (0111)

    return ( n &&  !(n & n-1));
    // is AND is zero means number is power of two
    // if n = 0 exception becasue  0 AND (1,0) = 0 

}

int numberOfOnes(int n ){
    int count = 0;

    while(n > 0){
        // n & n-1 will delete a right most 1 from n (see 6, 5 above)
        n = n & n-1;
        count++ ; 
    }

    return count;
}

int main(){

   // cout<< " does 32 is power of 2 : " << checkPowerOfTwo(32) << endl;
    //cout<< " does 24 is power of 2 : " << checkPowerOfTwo(24) << endl;

    cout<<"number of 1's in Binary form of 6 is  : " << numberOfOnes(6) << endl;
    cout<<"number of 1's in Binary form of 19 is  : " << numberOfOnes(19) << endl;

    return 0;
}