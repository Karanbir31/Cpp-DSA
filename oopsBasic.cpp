#include<iostream>
using namespace std;

class Student{
    public:
        string  name;
        int age;
        bool gender;
    

    void printInfo(){
        cout << "\nname : "<<name << ", age : " << age << ", gender(0-M/1-F) "<<gender;
    }
};



int main(){
    Student a;
    a.name = "karanbir";
    a.age = 21;
    a.gender = 0;

    Student arr[3] ;

    for(int i = 0; i < 3; i++){
        cout<<"enter name :";
        cin>> arr[i].name;

        cout<<" enter age ";
        cin >> arr[i].age;

        cout << "enter gender (0-M / 1-F)";
        cin >> arr[i].gender;
    }
    for(int i = 0; i < 3; i++){
        arr[i].printInfo();
    }

    return 0;
}