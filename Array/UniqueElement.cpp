#include<bits/stdc++.h>
using namespace std;
set<int>uniqueelement(int arr [],int n ){
    set<int>st;
    for (int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    
    return st;
}

void print (int arr[],int n){
    set<int>unique=uniqueelement(arr,n);
    for (int x : unique){
        cout << x << " ";
    }cout << endl ;
}

int main (){
    int arr[6]= {1,1,1,2,2,3};
    int n = 6;
  print(arr,n);
}