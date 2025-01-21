//place n queens in n*n board so that no one can attck each other

#include<iostream>
using namespace std;

bool isSafe(int** arr, int n, int x, int y){
    //check upper rows with same col number(90*)
    for(int i = 0; i < x; i++){
        if(arr[i][y] == 1)
            return false;
    }

    //check upper rows with 135* angle 
    int row =x;
    int col = y;
    while(row >=0 && col >= 0){
        if(arr[row][col] == 1)
            return false;
        row--;
        col--;
    }
    //check upper rows with 45* angle 
     row =x;
      col = y;
    while(row >=0 && col < n){
        if(arr[row][col] == 1)
            return false;
        row--;
        col++;
    }
    return true;
}

bool nQueen(int** arr, int n, int x){
    if(x >= n){
        return true;
    }
    for(int y = 0; y < n; y++){
        if(isSafe(arr, n, x, y)){
            //set queen to that (x,y)
            arr[x][y] = 1;
            
            //recursive call for rest of queens 
            if(nQueen(arr, n, x+1)){
                return true;
            }
            // if we are unable to set remaining queen
            // backtrack

            arr[x][y] = 0;
        }
    }
    // if we can't place i-th queen in i-th row then return false to (i-1)th queens call
    return false;
}

int main(){

    int n ;
    cout<< "Enter the number of queens : ";
    cin>>n;

    int** arr = new int* [n];
    for(int i =0; i < n; i++){
        arr[i] = new int [n];
        for(int j = 0; j < n; j++)
            arr[i][j] = 0;
    }
    
    if(nQueen(arr, n , 0 )){
        for(int i =0; i < n; i++){
            for(int j =0; j < n; j++)
                cout<< arr[i][j] << "  ";
            cout<<endl;
        }
    }else{
        cout<< endl << "we can't place "<< n << " qunees in "<< n << "*"<< n << "chess board ";
    }

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    
    return 0;
}