#include <iostream>
using namespace std;

void enterArrayData(int *arr, int arrSize = 0)
{
    cout << "enter the " << arrSize << " interger values in array \n";
    for (int i = 0; i < arrSize; i++)
    {
        cout << "enter " << i << "th value :";
        cin >> arr[i];
    }
}

void DisplayArrayData(int *arr, int arrSize = 0)
{
    cout << "Given array is :";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapTwoNumber(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bubbleSort(int *arr, int arrSize = 0)
{
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize - (i + 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapTwoNumber(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void InsertionSort(int *arr, int arrSize = 0)
{
    for (int i = 1; i < arrSize; i++)
    {
        int j = i;
        int temp = arr[j];

        // current element to swift on its right pos is arr[j]
        while (arr[j - 1] > temp && j > 0)
        {
            arr[j] = arr[j - 1];
            j--;
        }

        arr[j] = temp;
    }
}

int main()
{

    int arr[] = {1000, -1000, 0, 1, 2, 3, 3, 5, 5, 8, 7, 6, -10, -20,
                 100, -500, 999, 4, 0, 0, -1, -2, -3, 2000, -2000};
    int arrSize = 25;

    // enterArrayData(arr, arrSize);
    cout << "Before Sorting ";
    DisplayArrayData(arr, arrSize);

    // bubbleSort(arr, arrSize);

    InsertionSort(arr, arrSize);

    cout << "\n After the soring";
    DisplayArrayData(arr, arrSize);
    
    return 0;
}
