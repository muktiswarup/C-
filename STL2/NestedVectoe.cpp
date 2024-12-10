/* #include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>matrix;
    /* matrix= {
        {96,32,14},
        {65,45,85},
        {10,23,56}
    };
    for (int i =0;i<matrix.size();i++){
        for (int j=0;j<matrix[i].size();j++){
            cout << matrix[j] << " ";
        }
        cout << endl;
    } */

   /*for (int i =1;i<=3;i++){
    vector<vector<int>>row;
    for (int j=1;j<=3;j++){
        row.push_back(i*j);
    }
    matrix.push_back(row);
   }
    for(int i:matrix){
        for(int j :i){
            cout << j << " ";
        }
        cout << endl;
    }

    
} */

// vector in array 
/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    vector<int>arr[3];
    arr[0]={1,2,3};
    arr[1]={5,4,6};
    arr[2]={3,2,1};
   cout << arr[0][2]<< endl;
   for (int i =0;i<3;i++){
    for (int j=0;j<3;j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
   }
} */

#include<bits/stdc++.h>
using namespace std;

void print (vector<int>v){
    int n = v.size();
    for (int i =0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main (){
    cout << "Enter the no of array you want to take as input " << endl;
    int N;
    cin >> N;
    vector<int>arr[N];
    for (int i=0;i<N;i++){
        int n ;
        cin >> n;
        for (int j =0;j<n;j++){
            int x;
            cin >> x;
            arr[i].push_back(x);
        }

    }
    for (int i =0;i<N;i++){
        print(arr[i]);
    }
}