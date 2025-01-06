#include<iostream>
using namespace std;

int primeOrNot(int number){
    for(int i =2; i < number/2; i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int number;
    cout<<"Enter the number to check prime or not :";
    cin>>number;
    if(primeOrNot(number)){
        cout<<number<<" is a prime number\n";
    }else{
        cout<<number<<" is not a prime number\n";
    }
    return 0;
}