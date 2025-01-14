#include<bits/stdc++.h>
using namespace std ;

int largest (int arr[],int n){
    int max =arr[0];
    for(int i =1;i<n;i++){
        if(arr[i]>max){
            max =arr[i];
        }
    }
    return max ;
}
int secondLargest(int arr[],int n){
    int max = largest(arr,n);
    int secondMax=arr[0];
    for (int i =1;i<n;i++){
        if(arr[i]<max && arr[i]>secondMax){
            secondMax=arr[i];
        }
    }
    return secondMax;
}
int main (){
    int arr [5]= {52,14,85,36,14};
    int n =5;
    cout << "The largest element of the array is : " << largest(arr,n) << endl;
    cout << "The second largest element of the array is : " << secondLargest(arr,n);
}