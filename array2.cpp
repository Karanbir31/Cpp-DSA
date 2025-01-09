// sum of all subArrays in given array.
// subArray is continuous part of array, like (subset but continous)

#include <iostream>
using namespace std;

void sumOfSubArrays(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        int currSubArray[arrSize];
        int currSum = 0;
        for (int j = i; j < arrSize; j++)
        {
            currSubArray[j] = arr[j];
            currSum += arr[j];
            cout << "\n( ";
            for (int k = i; k <= j; k++)
            {
                cout << currSubArray[k] << ";";
            }
            cout << ")  : " << currSum;
        }
    }
}

int maximunOfTwoNumber(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

void longestArithematicSubArray(int *arr, int arrSize)
{
    int st = 0, ed = 1, currLen = 2, maxLen = 2;
    int currDiff = arr[st] - arr[ed];
    while (ed < arrSize - 1 && st <= ed)
    {
        if (currDiff == (arr[ed] - arr[ed + 1]))
        {
            ed++;
            currLen++;
        }
        else
        {
            maxLen = maximunOfTwoNumber(maxLen, currLen);
            st = ed;
            ed = ed + 1;
            currDiff = arr[st] - arr[ed];
            cout<<" "<<st<<" "<<ed<<endl;
            currLen = 2;
        }
    }
    cout << "Length of largest arithematic subArray is : " << maxLen;
}

int main()
{
    // int arrSize = 5;
    // int arr[arrSize] = {1, 2, 0, 7, 2};
    // sumOfSubArrays(arr, arrSize);

    int arrSize = 7;
    int arr[arrSize] = {10, 7, 4, 6, 8, 10, 11};
    longestArithematicSubArray(arr, arrSize);
    return 0;
}