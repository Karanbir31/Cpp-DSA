// 1st repeating element in int array,
//  an element occurs more than 1 and with smallest index

#include <iostream>
using namespace std;

int maximunElementInArray(int *arr, int arrSize = 0){
    int mx = INT16_MIN;
    for (int i = 0; i < arrSize; i++){
        mx = max(mx, arr[i]);
    }
    return mx;
}

int firstRepeatingElement(int *arr, int arrSize = 0)
{
    int minIdx = INT16_MAX;
    int maxElement = maximunElementInArray(arr, arrSize);
    int indexArr[maxElement + 1];
    
    for (int i = 0; i <= maxElement; i++){
        indexArr[i] = -1;
    }
    for (int i = 0; i < arrSize; i++){
        if (indexArr[arr[i]] != -1){
            minIdx = min(minIdx, indexArr[arr[i]]);
        }
        indexArr[arr[i]] = i;
    }
    if (minIdx != INT16_MAX)
    {
        return minIdx;
    }
    return -1;
}

int main()
{

    int arrSize = 8;
    int arr[arrSize] = {1, 5, 3, 4, 3, 5, 1, 5};

    cout << "first repeating element in given array is : ";
    cout << firstRepeatingElement(arr, arrSize);

    return 0;
}