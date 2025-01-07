// Throug map datastructure

/* #include<bits/stdc++.h>
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
} */

// through set datastructure
/* #include <bits/stdc++.h>
using namespace std ;

set<int> unionn (int arr1[],int m,int arr2[],int n){
  set<int > st ;
  for (int i =0;i<m;i++){
      st.insert(arr1[i]);
  }
  for (int i =0;i<n;i++){
       st.insert(arr2[i]);
  }
return st;

}
int main (){
        int arr1[]= {1,5,9,6};
        int arr2[]= {2,5,3,4};
        int m =4;
        int n = 4;
        set<int >v = unionn(arr1,m,arr2,n);
        for (auto &it:v){
            cout << it << " ";
        }
} */

// THROUGH TWOP POINTER APPROACH

#include <bits/stdc++.h>
using namespace std;
vector<int> un(int a[], int m, int b[], int n)
{

    // int n1 = a.size();
    // int n2 = b.size();
    vector<int> c;
    int i = 0;
    int j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            if (c.size() == 0 || c.back() != a[i]) {
                    c.push_back(a[i]);
                } 
                i++;
        }
        else
        {
            if (c.size() == 0 || c.back() != b[j] ){
                    c.push_back(b[j]);
                } 
                j++;
    
        }
    }
    while (i < m)
    {
        if (c.size()==0 || c.back()!=a[i]){
            c.push_back(a[i]);
            }
            i++;
    }
    while (j < n)
    {
            if (c.size() == 0 || c.back() != b[j] ){
                    c.push_back(b[j]);
                } 
                j++;
    }
    return c ;
}
int main (){
        
        int arr1[]= {1,5,6,7};
        int arr2[]= {2,3,4,6};
        int m =4;
        int n = 4;
        vector<int >c = un (arr1,m,arr2,n);
        for (auto &it:c){
            cout << it << " ";
        }
}