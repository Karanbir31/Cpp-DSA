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

int main(){
    int dist ;
    cout << "Enter the distination number : ";
    cin >> dist;
    cout <<endl << "total paths count : " << numberOfPaths(1, dist, "- ");
    return 0;
}