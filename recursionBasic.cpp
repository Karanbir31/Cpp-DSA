#include<iostream>
using namespace std;

int sum_till_n(int n){
    if(n == 0){
        return 0;
    }
    return n + sum_till_n(n-1);
}

int nRaisedToPowerP(int n, int p){
    if(p == 1){
        return n;
    }
    return n * nRaisedToPowerP(n, p-1);
}

int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n-1);
}

int n_thElementInFibo(int n){
    // 0 1 1 2 3 5 8 13 21 ........
    if(n == 0 || n == 1){
        return n;
    }
    return n_thElementInFibo(n-1) + n_thElementInFibo(n-2);
}

int main(){

    cout<< " sum of number till n is : " << sum_till_n(10) << endl;
    cout<< " n raised to power p : " << nRaisedToPowerP(2, 10) << endl;
    cout<< " factorial of n : " << factorial(5) << endl;
    cout<< " n-th element in fibonaci series : " << n_thElementInFibo(7) << endl;
    

    return 0;
}