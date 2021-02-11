#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<string> result;
        int min_time;
        int max_time;
        vector<int> result;
        vector<char> a;
        vector<char> m_t;
        int n=1;
        int time;
        string meeting_time;
        int meeting_time_min;
        cin>>meeting_time;
        for(char t:meeting_time){
            m_t.push_back(t);
        }
        if(m_t[6]==A){
            meeting_time_min = (60*(a[0]*10+a[1])) + (a[3]*10+a[4]);
        }
        if(m_t[6]==P){
            meeting_time_min = (60*(12+(a[0]*10+a[1]))) + (a[3]*10+a[4]);
        }
        for(int i=0; i<n; i++){
            cin>>time;
            for(int t:time){
                a.push_back(t);
            }
            if(a[6]==A && a[15]==A){
                min_time = (60*(a[0]*10+a[1])) + (a[3]*10+a[4]);
                max_time = (60*(a[9]*10+a[10])) + (a[12]*10+a[13]);
            }
            if(a[6]==A && a[15]==P){
                min_time = (60*(a[0]*10+a[1])) + (a[3]*10+a[4]);
                max_time = (60*(12+(a[9]*10+a[10]))) + (a[12]*10+a[13]);
            }
            if(a[6]==P && a[15]==P){
                min_time = (60*(12+(a[0]*10+a[1]))) + (a[3]*10+a[4]);
                max_time = (60*(12+(a[9]*10+a[10]))) + (a[12]*10+a[13]);
            }
            if(a[6]==P && a[15]==A){
                min_time = (60*(12+(a[0]*10+a[1]))) + (a[3]*10+a[4]);
                max_time = (60*(a[9]*10+a[10])) + (a[12]*10+a[13]);
            }
            if (meeting_time_min >= min_time && meeting_time_min <= max_time){
                result.push_back("1");
            }
            else{
                result.push_back("0");
            }
        }
        for(int i=0; i<result.size(); i++){
            cout<<i;
        }
        cout<<endl;
    }
}

/*
12:01 AM
4
12:00 AM 11:42 PM
12:01 AM 11:59 AM
12:30 AM 12:00 PM
11:59 AM 11:59 PM
1100

04:12 PM
5
12:00 AM 11:59 PM
01:00 PM 04:12 PM
04:12 PM 04:12 PM
04:12 AM 04:12 AM
12:00 PM 11:59 PM
*/