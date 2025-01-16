//Tower of hanoi -- move element from one block to other using helper block and only move
// one element at a time , and can only put smaller element on top of larger element

#include<iostream>
using namespace std;

void towerOfHanoi(int n, char scr, char dest, char help ){
    if(n == 0){
        return;
    }
    towerOfHanoi(n-1, scr, help, dest);
    cout << "Move " << scr <<" to " << dest << endl;
    towerOfHanoi(n-1, help, dest, scr);

}

int main(){
    
    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}