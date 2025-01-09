//Max element till the i th index in array

#include <iostream>
using namespace std;
int maxTillI(int *arr, int i){
    int currMaxIndex = 0;
    for(int j =1; j <= i; j++ ){
        if(arr[currMaxIndex] < arr[j]){
            currMaxIndex = j;
        }
    }
    return currMaxIndex;
}

int main()
{
    int arrSize = 6;

    int arr[arrSize] = {0, -9, 1, 3, -4, 5};
    for (int i = 0; i < arrSize; i++)
    {
        int currMaxElementIndex = maxTillI(arr, i);
        cout << "\nMax element till " << i << " is : " << arr[currMaxElementIndex];
    }
    return 0;
}

