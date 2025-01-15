// prime factorisation using sieve of eratosthenes

#include<iostream>
using namespace std;

void primeFactors(int n){
    bool negitiveNumber = false;
    if( n == 0){
        cout<<0;
        return;
    }
    if(n < 0){
        negitiveNumber = true;
    }
    n = abs(n);

    //smallest prime factor
    int spf[n + 1] = {0};

    for(int i = 2; i <= n; i++){
        if(spf[i] != 0){
            continue;
        } 
        for(int j = i*i; j <= n; j += i){
            if(spf[j] == 0)
                 spf[j] = i;
        }
    }
    for(int i = 0; i <= n; i++){
        if(spf[i] == 0){
            spf[i] = i;
        }
       // cout<<i<<"-  "<<spf[i]<<endl; 
       // to print numbers with their spf
    }

    while(n != 1){
        cout<<spf[n]<<" * ";
        n = n / spf[n];
    }
    if(negitiveNumber)
        cout<< -1;
    else
        cout<< 1;
}

int main(){
    primeFactors(50);
    return 0;
}