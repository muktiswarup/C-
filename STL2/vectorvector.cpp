/* #include <bits/stdc++.h>
using namespace std;

void print(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter the number of arrays you want to take as input: " << endl;
    int N;
    cin >> N;

    // Use a vector of vectors
    vector<vector<int>> arr(N);

    for (int i = 0; i < N; i++) {
        cout << "Enter the number of elements in array " << i + 1 << ": ";
        int n;
        cin >> n;

        cout << "Enter the elements for array " << i + 1 << ": ";
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            arr[i].push_back(x); // Push elements into the current vector
        }
    }

    // Print all vectors
    cout << "The entered arrays are:" << endl;
    for (int i = 0; i < N; i++) {
        print(arr[i]);
    }

    return 0;
}
 */


/* #include<bits/stdc++.h>
using namespace std ;
void print (vector<int>v){
    int n= v.size ();
    for (int i =0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl ;
}
int main (){
    cout << "The of vector you want to enter in the vector "  << endl;
    int N;
    cin >> N;
    vector<vector<int>>v(N);
    for(int i =0;i<N;i++){
        cout << "Enter the no of element  elements for array " << i+1 << endl;
        int n;
        cin >> n;
        cout << "Enter the elements for array " << i+1 << endl;
        for (int j =0;j<n;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i=0;i<N;i++){
        print(v[i]);
    }
    cout << endl;
} */

/* #include<bits/stdc++.h>
using namespace std ;
void print (vector<int>v){
    int n =v.size ();
    for (int i =0;i<n;i++){
        cout << v[i] << " ";
    }
    cout << endl ;
}
int main (){
    int N;
    cout << "Enter the number of vector you want " << endl;
    cin >> N;
    vector<vector<int>>v(N);
    for(int i =0;i<N;i++){
        cout <<"Enter the number of element in an array " << i+1 <<endl;
        int n ;
        cin >> n;
        cout << "Enter the element to the array " << i+1 << endl;
        for (int j=0;j<n;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i =0;i<N;i++){
        print(v[i]);
    }

} */

#include<bits/stdc++.h>
using namespace std ;
void print (vector<int>v){
    int n =v.size();
    for (int i =0;i<n;i++){
        cout << v[i]<< " ";
    }
    cout << endl;
}
int main (){
    int N;
    cout << "No of vector enter" << endl;
    cin >> N;
    vector<vector<int>>v(N);
    for(int i =0;i<N;i++){
        cout << "No of elements for the array " << i+1 << endl;
        int n;
        cin >> n;
        cout << "Enter the element for the array "<< i+1 << endl;
        for (int j =0;j<n;j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i =0;i<N;i++){
        print (v[i]);
    }
    cout << v[0][2] << endl;

}