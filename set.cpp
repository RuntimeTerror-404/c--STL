// set works on the principle of BST(binary search tree)
// it stores the values in the nodes of constructed tree
#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(9);
    s.insert(11);
    s.insert(14);
    s.insert(2);
    s.erase(14);
    cout<<s.size()<<endl;
    for(int x : s){
        cout<<x<<" ";
    }
    cout<<endl;
    // set<int>::iterator it = s.find(3);
    // if(it == s.end()){
    //     cout<<"not found!"<<endl;
    // }
    // else{
    //     cout<<"yes!, it is there"<<endl;
    // }
    auto x1 = s.upper_bound(11);
    cout<<*x1<<endl;
}