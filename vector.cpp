#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
using namespace std;
bool f(int x, int y){  //comparator function....
    return x > y;
}
int main(){
    vector<int> v = {11,4,90,32,7,14};
    cout<<v[0]<<endl;
    // sort(v.begin(), v.end());
    v.push_back(100);
    v.push_back(212);
    // vector<int> :: iterator it;
    v.erase(v.begin()+2);
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // };
    bool present = binary_search(v.begin(), v.end(), 99);
    cout<<present<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    };
    cout<<endl;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    };
    cout<<endl;
    vector<int> :: iterator it1 = lower_bound(v.begin(), v.end(), 32);
    vector<int> :: iterator it2 = upper_bound(v.begin(), v.end(), 32);
    cout<<*it1<<" "<<*it2<<endl;
    v.insert(v.begin()+2, 10);
    for(int x : v){
        cout<<x<<" ";
    }

    return 0;
}