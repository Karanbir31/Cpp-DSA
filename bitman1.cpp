#include <iostream>
using namespace std;

int getBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}
int setBit(int n, int pos){
    return (n | (1 << pos)) ;
}
int clearBit(int n, int pos){
    int mask = ~(1 << pos);
    //~ 1's compliment (1 to 0) and (0 to 1)
    // i = 0101 then ~i = 1010

    return (n & mask);
}

int updateBit(int n , int pos, int bit){
    //update with 0 or 1
    // update = clear to set

    int mask = ~(1 << pos);
     n = (n & mask);
    int setBit = (bit << pos);

    return (n | setBit) ;

}


int main(){
    int n = 5;
    //0 1 0 1
    //3 2 1 0 pos
    
    cout <<"getBit(5, 2) : " << getBit(n, 2) << endl;
    cout <<"setBit(5, 1) : " << setBit(n, 1) << endl;
    cout<<"clearBit(5, 0) : "<< clearBit(n , 0) << endl;
    cout<<"updateBit(5, 1, 1) : "<< updateBit(n , 1, 1) << endl;
    cout<<"updateBit(5, 0, 0) : "<< updateBit(n , 0, 0) << endl;
    return 0;
}