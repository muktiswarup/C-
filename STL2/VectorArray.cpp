/* #include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cout << "Enter the number of rows: ";
    cin >> N;

    // Declare an array of vectors
    vector<int> arr[N];

    for (int i = 0; i < N; i++) {
        int n;
        cout << "Enter the number of elements in row " << i + 1 << ": ";
        cin >> n;

        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            arr[i].push_back(x); // Add element to the current row (vector)
        }
    }

    // Print the elements of the 2D structure
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
} 
*/
#include<bits/stdc++.h>
using namespace std ;
int main (){
    cout << "Enter the no of array"<< endl;
    int N;
    cin >> N;
    vector<int>arr[N];
    for(int i =0;i<N;i++){
        cout << "Enter the no of element you want to enter in the array" << i+1 << endl;
        int n ;
        cin >> n;
        cout << "Enter the elemnt to the array " << i+1 << endl;
        for (int j =0;j<n;j++){
            int x;
            cin >> x;
            arr[i].push_back(x);
        }
    }
    for (int i =0;i<N;i++){
        for(int j =0;j<arr[i].size();j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}