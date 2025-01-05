#include<iostream>
using namespace std;

void enterArrayData(int * arr, int arrSize = 0){
 cout<<"enter the "<<arrSize<<" interger values in array \n";
    for (int i = 0; i < arrSize; i++)
    {
        cout<<"enter "<<i<<"th value :";
       cin>> arr[i];
    }
}

void DisplayArrayData(int * arr, int arrSize = 0){
 cout<<"\n\nGiven array is :";
    for (int i = 0; i < arrSize; i++)
    {
        cout<<arr[i]<<" ";
        
    }
}

int main(){
   // clrscr();
    int arrSize = 10;
    int arr[arrSize];

    enterArrayData(arr, arrSize);
    DisplayArrayData(arr, arrSize);

    

    return 0;
}