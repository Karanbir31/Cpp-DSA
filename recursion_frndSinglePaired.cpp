//number of ways in which n frnds can remain single and paired up
#include<iostream>
using namespace std;

int frndSingleOrPaired(int n){
    if(n == 0 || n == 1 || n == 2){
        return n;
    }
    return frndSingleOrPaired(n-1) + frndSingleOrPaired(n-2);
}

int main(){
    for(int i = 0; i < 5; i++){
         cout<< "\nfor "<<i <<" friends NOW to remain single and paired : " <<frndSingleOrPaired(i);
    }
   
    return 0;
}