#include<iostream>
#include<cmath>
using namespace std;

int primeOrNot(int number){
    if(number == 0 || number == 1){
        return 0;
    }
    for(int i =2; i < sqrt(number) ; i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}

void sieveOfEratosthenes(int n = 50){
    int arr[n + 1] = {0};

    for(int i = 2; i <= n; i++){
          if(arr[i] == 1){
            continue;
        }    
        for(int j = i*i; j <= n; j += i){
            arr[j] = 1;
        }
    }
    for(int i = 2; i <= n; i++){
        if(arr[i] == 0){
            cout<<i<<"  ";
        }
    }
}



int main(){
    int number;
    char ch = 'n';

    sieveOfEratosthenes(50);
    
    while ( ch == 'y' || ch == 'Y'){
        cout<<"Enter the number to check prime or not :";
        cin>>number;
        cout<<endl<<abs(number)<<endl;
         if(primeOrNot(abs(number))){
             cout<<number<<" is a prime number\n";
         }else{
           cout<<number<<" is not a prime number\n";
         }
        cout<<"Do you want to check another number (y/n) :";
        cin>>ch;
    }
    return 0;
}