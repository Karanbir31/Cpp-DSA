#include<iostream>
using namespace std;

class Student{
    //private by default

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

        //copy constructor
        Student(Student &s){
            name = s.name;
            age = s.age;
            gender = s.gender;
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

        //operator overloading
        bool operator == (Student &s){
            if(name == s.name && age == s.age && gender == s.gender){
                return true;
            }
            return false;
        }

        ~Student(){
            cout<< endl << "calling destructor ";
        }
};



int main(){
    Student a("karan", 22, 0);
    //call constructor with parameters

    a.printInfo();
    cout<< endl;
    
    Student arr[3] ;
    //call constructor without parameters / default constructor 
    //call 3 timmes | for arr[0], arr[1], arr[2]

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

    Student stu1 = arr[0];
    Student stu2(arr[1]);

    cout << "\nstu1 and stu2 using copy constructor ";
    stu1.printInfo();
    stu2.printInfo();

    cout << endl << endl << "operator overloading example";
    cout<< "\nis stu1 is equeal to stu2 : "<< (stu1 == stu2);
    cout<< "\nis arr[0] is equeal to stu2 : "<< (arr[0] == stu2);
    return 0;
}