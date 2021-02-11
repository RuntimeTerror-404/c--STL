#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {2, 1, 4, 6, 7, 5, 8};
    int n = sizeof(a)/sizeof(int);
    for(int i=0; i<n; i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}