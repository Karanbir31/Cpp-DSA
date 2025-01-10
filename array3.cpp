#include <iostream>
using namespace std;

int numberOfRecordBreakingDays(int *arr, int arrSize = 0)
{
    int count = 0;
    int currMaxVisitor = -1;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > currMaxVisitor && (i == arrSize-1 || arr[i] > arr[i + 1]))
        {
            // arr[i] > currMaxVisitor means number of vistior on currDay is currMaxVisitor on previous days
            // i is arrSize -1 , means it is last element in arrray and we use || logic or 
                // so it will return True and skip arr[i]> arr[i+1] as True OR (1,0) is true so it skip it
            // arr[i]< arr[i+1] , check the currVisitor is greater than next days, for days index 2nd upper condition work
            currMaxVisitor = arr[i];
            count++;
        }else{
            currMaxVisitor = max(currMaxVisitor, arr[i]);
            // so in if condition it is posible that currElement is maximum till now but next element is even greater
            // so in this case condition 1 is true and 2nd is False which overall false so we have to update currMaxVisitors
        }
    }
    return count;
}

int main()
{
    int arrSize = 8;
    int arr[arrSize] = {1, 2, 0, 7, 2, 0, 2, 2};

    int noRB = numberOfRecordBreakingDays(arr, arrSize);
    cout << "number of record breaking days are : " << noRB;
    return 0;
}

/*Problem:
Number of visitors on i-th day is Vi or V[i]
 A day is record breaking if it satisfies both of the following conditions:

1-The number of visitors on the day is strictly larger than
     the number of visitors on each of the previous days.

2- Either it is the last day, or the number of visitors on the
     day is strictly larger than the number of visitors on the following day.

Note that the very first day could be a record breaking day!
find out the number of record breaking days.

*/