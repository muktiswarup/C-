/* #include<bits/stdc++.h>
using namespace std ;
void print(vector<int>v){
    int n = v.size();
    for(int i =0;i<n;i++){
        cout << v[i] << " " ;
    }
    cout << endl;
}
int main (){
    int N;
    cout << "Number of vector you want " << endl;
    cin >> N;
    vector<vector<int>>v(N) ;
    for(int i =0;i<N;i++){
        cout << "For the vector number " << i+1 << endl; 
        int n ;
        cin >> n ;
        cout << "Number of eleement in the array you want to keep in " << i+1 << " vector" << endl;
        cout << "Enter all the clements "<< endl;
        for(int j=0;j<n;j++){
            int k;
            cin >> k;
            v[i].push_back(k);
        } 
    }
    for(int i =0;i<N;i++){
        print(v[i]);
    }
} */

#include<bits/stdc++.h>

using namespace std ;
void print (vector<int>arr[]){
    int n = arr.size ();
    for (int i =0;i<n;i++){
        for (int j =0;j<arr[i].size;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
})
int main (){
    int N;
    cout << "Number of array in the vector " << endl;
    cin >> N;
    vector<int>arr[N];
    for(int i =0;i<N;i++){
        cout << "Number of element in the array" << i+1 << endl;
        int n;
        cin >> n;
        cout << "Enter all the element in the array " << i+1 << endl;
        for (int j =0;j<n;j++){
            int k ;
            cin >> k;
            arr[i].push_back(k);
        }
     }
    for (int i =0;i<N;i++){
        print(arr);
        cout << endl;
    }
}