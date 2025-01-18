//number of ways to tile (2*1) on board 2*n 

#include<iostream>
using namespace std;

// board = 2*n and title = 2*1
int tiling(int n, int count = 0){

  if(n < 0 )  {
    return 0;
  }
  if( n == 0){
    return 1;
  }
  return (tiling(n-1) + tiling(n-2));
}

int main(){
    cout<< "Tiling ways : " << tiling(4);
    return 0;
}