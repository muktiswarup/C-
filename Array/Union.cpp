#include<bits/stdc++.h>
using namespace std;
vector<int> unionn(int arr1[],int m ,int arr2[],int n){
    map<int,int> mp;
    vector<int > u;
    for (int i=0;i<m;i++){
        mp[arr1[i]]++;
    }
    for (int i =0;i<n;i++){
        mp[arr2[i]]++;
        
    }
    for (auto &it : mp){
        u.push_back(it.first);
    }
    return u;
}

int main (){
    int arr1[]= {1,3,5,6};
    int arr2[]= {2,4,7};
    int m =4;
    int n =3;
    vector<int>u= unionn(arr1,m,arr2,n);
    for( auto & it:u){
        cout << it << " ";
    }
}