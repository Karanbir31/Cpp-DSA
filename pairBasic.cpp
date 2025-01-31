#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2){
    return p1.first <= p2.first;
}

int main(){

    pair<int, char> myPair;
    myPair.first = 2156;
    myPair.second = 'k';
    cout<<myPair.first<<"-"<<myPair.second;

    int arr[] = {10,16,7,14,5,3,2,9};
    vector<pair<int, int>> v;

    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++){
        /*
        pair<int, int> p ;
        p.first = arr[i];
        p.second = i;
        v.push_back(p);
        */
       v.push_back( make_pair(arr[i], i));
    }

   sort(v.begin(), v.end(), myCompare);

   for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])) ; i++){
        arr[v[i].second] = i;
   }

   cout<<"reduce array is : \n";
   for(int i = 0; i < (sizeof(arr) / sizeof(arr[0])) ; i++){
       cout<< arr[i] << ' ';
   }


    return 0;
}