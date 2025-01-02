#include <iostream>
using namespace std;

int main(){
    int arr[6]= {12, 45, 23, 51, 19, 8};

    cout<<"array after the selection sort \n";
    for (int i =0; i < 6 ; i++)
        cout<<"  "<<arr[i];

    for (int i = 0; i < 6 ; i++){

        int curr_min = i;
        for (int j = i+1; j < 6 ; j++){
            if(arr[curr_min]  > arr[j])
                curr_min = j;
        }
        //swap the element at current min index with i(th) index element
        int temp = arr[i];
        arr[i] = arr[curr_min];
        arr[curr_min] = temp;
    }

    cout<<"\n array after the selection sort \n";
    for (int i =0; i < 6 ; i++)
        cout<<"  "<<arr[i];

    return 0;
}
