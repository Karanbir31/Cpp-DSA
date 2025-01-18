//number of ways to tile (2*1) on board 2*n 

#include<iostream>
using namespace std;

// board = 2*n and title = 2*1
int tiling(int n, int count = 0){

  if(n == 2 || n == 1 || n == 0){
    return n;
  }
  return (tiling(n-1) + tiling(n-2));
}

int main(){
    for(int i = 1; i < 6; i++){
      cout<< "\nTiling ways " << i << " : "<< tiling(i);
    }
    return 0;
}