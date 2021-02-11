// // maps works on the principle of BST in which key construct a node and store 
// value in every node so that it forms a tree structure with each node of key and value 
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, float> m1;
    m1[0] = 101;
    m1[1] = 211;
    m1[2] = 200;
    cout<<"Key"<<" "<<"Value"<<endl;
    for(auto it=m1.begin(); it!=m1.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    };

    unordered_map<string, int> m2;
    m2["A"] = 919;
    m2["Z"] = 222;
    m2["M"] = 655;
    m2.insert({"B", 100});
    for(auto it=m2.begin(); it!=m2.end(); it++){
        cout<<it->first<<" -> "<<it->second<<endl;
    }

    // if(m2.find("A")==m2.end()){
    //     cout<<"Not Found"<<endl;
    // }
    // else{
    //     cout<<"Found"<<endl;
    // }
}