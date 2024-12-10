/* #include<bits/stdc++.h>
using namespace std ;
void print (vector<int>&v){
    int n = v.size();
    for(int i =0;i<n;i++){
        cout<<v[i] << " ";
    }
    cout << endl;
      
    
}
int main (){
    vector<int>v;
    int n ;
    cout << "The number of element you want to enter " << endl;
    cin >> n;
    for(int i =0;i<n;i++){
        cout << "the n no of value you want to add " << endl;
        int x;
        cin >> x;
       v. push_back(x);
    }
    print(v);
    v.pop_back();
    print(v);
} */

#include<bits/stdc++.h>
using namespace std ;
void print (vector<int>v,int n){
     n = v.size ();
    for(int i =0;i<n;i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}
int main (){
    vector<int>v;
   cout << "Enter size of the array" <<endl;
    int k;
    cin >> k;
    for(int i =0;i<k;i++){
        int n ;
        cin >> n;
        v.push_back(n);
    }
    int n = v.size ();

    print(v,n);
}