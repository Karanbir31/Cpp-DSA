//count number of paths to move from Point A to B according to dics

#include<iostream>
using namespace std;

int numberOfPaths(int s, int e, string path = ""){
    if(s == e ){
        cout<< path << endl;
        return 1;
    }
    if(s > e ){
        return 0;
    }
    int count = 0;
    for(int i = 1; i <=6; i++){
        string step = ", " + to_string(i);
      count += numberOfPaths(s+i, e,  path + step );
    }
    return count;
}

// int n*n, number of paths required for move O,O to (n-1, n-1)
int numberOfPathsInMaze(int n, int x = 0, int y = 0){
    if(x == n-1 && y == n-1){
        return 1;
    }
    if(x > n-1 || y > n-1){
        return 0;
    }

    return numberOfPathsInMaze(n , x+1, y) + numberOfPathsInMaze(n , x, y+1);
}

int main(){
    int dist  = 5;
    cout <<endl << "total paths count : " << numberOfPaths(1, dist, "start ");
    cout <<endl << "total paths count IN MAZE(3x3) : " << numberOfPathsInMaze(3);
    return 0;
}