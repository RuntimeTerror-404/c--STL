// maps works on the principle of BST in which key construct a node and store 
// value in every node so that it forms a tree structure with each node of key and value 
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    map<int, int> m;
    m[0] = 100;
    m[1] = 500;
    m[2] = 330;
    m.insert(pair<int,int>(3,444));
    m.erase(2);
    // map<int, int>::iterator i;
    // for(auto i=m.begin(); i!=m.end(); i++){
    //     cout<<i->first<<" "<<i->second;
    //     cout<<endl;
    // }
    map<char,int> m1;
    string c = "Mohit";
    for(char x:c){
        cout<<x<<" ";
        // m1[x]++;
        // cout<<m1[x]<<" ";
    }
    cout<<endl;
    cout<<m.size()<<endl;
}