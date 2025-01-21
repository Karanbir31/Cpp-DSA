#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ",";
    }

    cout << endl;
    vector<int> :: iterator it;
    for(it = v.begin() ; it != v.end(); it++ ){
        cout << *it << ";";
    }

    cout<<endl;
    for(auto element:v){
        cout << element << ",";
    }

    vector<int> v2 (3, 50);
    //(number of element, value of all element)
       cout<<endl << "Vector V2 : ";
    for(auto element:v2){
        cout << element << ",";
    }

    v2.push_back(1);
    v2.push_back(5);
    v2.push_back(1);
    v2.pop_back();
    cout<<endl << "Vector V2 after pushBack : ";
    for(auto element:v2){
        cout << element << ",";
    }

    return 0;
}