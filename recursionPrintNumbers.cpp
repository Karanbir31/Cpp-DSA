#include<iostream>
using namespace std;

void printNumberInDecreasingOrder(int n){
    if(n == 0){
        cout << n << " ";
        return;
    }
    cout << n << " ";
    printNumberInDecreasingOrder(n -1);
}
void printNumberInIncreasingOrder(int n){
    if(n == 0){
        cout << n << " ";
        return;
    }

    printNumberInIncreasingOrder(n-1);

    cout<< n << " ";

}

int main(){

    cout<< "in increasing order ";
    printNumberInIncreasingOrder(7);
    cout << "\nin decreasing order ";
    printNumberInDecreasingOrder(7);
    return 0;
}