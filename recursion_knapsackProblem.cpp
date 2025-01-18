//recursion_knapsackProblem
//

#include<iostream>
using namespace std;

int knapsack(int vl[], int wt[], int n, int kwt){
    if(n < 0 || kwt == 0){
        return 0;
    }
    if(wt[n-1] > kwt){
        return knapsack(vl, wt, n-1, kwt);
        //currItem wt > reamning knapsack wt limit than skip move to next
    }
    return max(
        knapsack(vl , wt, n-1, kwt),
        (knapsack(vl, wt, n-1, kwt - wt[n-1]) + vl[n-1])
    );
}

int main(){
    int n = 3;
    int wt[n] = {10, 20, 30};
    int vl[n] = {50, 50, 50};
    int kwt = 50;

    cout<< "max value of items that can store in knapsack is : " << knapsack(vl, wt, n, kwt);
    return 0;
}