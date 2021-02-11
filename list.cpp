#include <iostream>
#include <stack>  //push(), pop(), top(), empty()
#include <queue> //push(), pop(), front(), empty()
#include <list>
using namespace std;


int main(){
    list<int> l;
    l.push_back(10);
    l.push_back(21);
    l.push_back(32);
    l.push_back(100);
    l.push_back(55);
    l.sort();
    l.reverse();
    list<int> :: iterator it = l.begin();
    advance(it,2);
    l.insert(it,90);
    // l.remove(90);
    // l.insert((it), 99);
    cout<<l.size()<<endl;
    for(auto it = l.begin(); it != l.end(); it++){
        cout<<*it<<" --> ";
    }
    cout<<"NULL";
    
}








// queue<int> q;
//     q.push(3);
//     q.push(4);
//     q.push(0);
//     cout<<q.front()<<endl;
//     int x = q.size();
//     cout<<x<<endl;;
//     while(! q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }
    
/////////////////////////////////////////////////////////////////////

// stack<int> s;
    // s.push(10);
    // s.push(23);
    // s.push(19);
    // s.push(7);
    // while(!s.empty()){
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // int x = s.size();
    // cout<<x;
