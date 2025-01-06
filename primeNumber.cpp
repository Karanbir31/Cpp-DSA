#include<iostream>
using namespace std;

int primeOrNot(int number){
    if(number == 0 || number == 1){
        return 0;
    }
    for(int i =2; i < number/2 +1 ; i++){
        if(number%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int number;
    char ch = 'y';
    
    do{
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

    }while ( ch == 'y' || ch == 'Y');
    return 0;
}