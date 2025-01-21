#include<iostream>
using namespace std;

bool isSafe(int** maze, int x, int y, int n){
    if(x < n && y < n && maze[x][y] == 1){
        return true;
    }
    return false;
}

bool ratInMaze(int maze[5][], int x, int y, int n, int ans[5][]){
    
    if(isSafe(maze, x, y, n)){
        ans[x][y] = 1;
        
        if(ratInMaze(maze, x+1 , y , n, ans)){
            return true;
        }
        if(ratInMaze(maze, x, y+1, n, ans)){
            return true;
        }
        ans[x][y] = 0;
        return false;
    }
}

int main(){
    int n = 5;
    int maze[n][n]= {
                {1, 0, 1, 0, 1},
                {1, 1, 1, 1, 1},
                {0, 1, 0, 1, 0},
                {1, 0, 0, 1, 1},
                {1, 1, 1, 0, 1}
    };
    int mazeAns[n][n] = {0};

    ratInMaze(maze, 0 ,0 ,n, mazeAns);

    return 0;
}