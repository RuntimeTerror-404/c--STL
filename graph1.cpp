#include <bits/stdc++.h>
using namespace std;
class Graph{
public:
    unordered_map<string, list<pair<string,int>>> l;
    void addEdge(string x, string y, bool bidr, int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidr){
            l[y].push_back(make_pair(x,wt));
        }
    };
    void display(){
        for(auto p:l){
            string city = p.first;
            list<pair<string,int>> nbrs = p.second;
            cout<<city<<" -> ";
            for(auto nbr:nbrs){
                string dest = nbr.first;
                int dist = nbr.second;
                cout<<dest<<" "<<dist<<" ,";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g;
    g.addEdge("A","B", true, 20);
    g.addEdge("B","D", false, 31);
    g.addEdge("A","C", true, 25);
    g.display();
}