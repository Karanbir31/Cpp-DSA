#include<iostream>
using namespace std;

class Student{
    string  name;
    int age;
    bool gender;
    
    public:
        //constructor does not have return type
        Student(){
            name = "notSetYet";
            age = 0;
            gender = 0;
        }
        Student(string str, int n, bool g){
            name = str;
            age = n;
            gender = g;
        }

        void setName(string str){
            name = str;
        }
        void setAge(int a){
            age = a;
        }
        void setGender(bool g){
            gender = g;
        }


        void printInfo(){
            cout << "\nname : "<<name << ", age : " << age << ", gender(0-M/1-F) "<<gender;
        }
};



int main(){
    Student a("karan", 22, 0);

    a.printInfo();
    
    Student arr[3] ;

    for(int i = 0; i < 3; i++){
        if(i == 2)
            break;
            //just to display default values for arr[2]

        string name;
        int age;
        bool gender;

        cout<<"enter name :";
        cin>> name;
        arr[i].setName(name);

        cout<<" enter age ";
        cin >> age;
        arr[i].setAge(age);

        cout << "enter gender (0-M / 1-F)";
        cin >> gender;
        arr[i].setGender(gender);
    }
    for(int i = 0; i < 3; i++){
        arr[i].printInfo();
    }

    return 0;
}