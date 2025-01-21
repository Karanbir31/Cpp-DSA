//merge sort 
#include<iostream>
using namespace std;

void merge(int arr[], int st, int mid, int ed){
    int n1 = mid - st + 1;
    int n2 = ed - mid ;
    int a[n1];
    int b[n2];

    for(int i=0; i < n1; i++){
        a[i] = arr[st + i];
    }
    for(int i=0; i < n2; i++){
        b[i] = arr[mid +1+ i];
    }

    int i = 0;
    int j = 0;
    int k = st;

    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while(i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = a[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[], int st, int ed){
    if( st < 0 || ed < 0 ){
        return;
    }
    if(st < ed ){
        int mid = (st + ed)/2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, ed); 
        merge(arr, st, mid, ed);
    }
}

int main(){
    int n = 9;
    int arr[n] = {6, 3, 9, 5, 2, 8, 7, 1, 8};

    cout<<"\narray before sorting : " << endl;
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }

    mergeSort(arr, 0, n);
    cout<<"\narray After sorting : " << endl;
    for(int i=0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}