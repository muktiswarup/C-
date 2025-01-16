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
int  sorted (int arr[],int n ){
    int no=0;
    int b=arr[0];
    for (int i =1;i<n ;i++){
        if (arr[b]>arr[i]){
            no++;
            b++;
        }
    }
    return no ;
}
int main (){
    int arr [5]= {1,2,3,4,5};
    int n =5;
    cout << "The largest element of the array is : " << largest(arr,n) << endl;
    cout << "The second largest element of the array is : " << secondLargest(arr,n)<<endl;
    
    int check = sorted(arr,n);
    cout << "the no is " << check << endl;
    if (check==0){
        cout <<"its a sorted array" << endl; 
    }else {
        cout << "ITS not a sorted array " << endl;
    }
}