/* #include<bits/stdc++.h>
using namespace std ;
int sort (int arr[],int n){
    for(int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr[n-1];
}
int main (){
    int arr [10]= {4,8,4,9,6,15,7,65,3,9};
    int n =10;
    cout << "The largest element is " << sort(arr,n) << endl;
} */


#include<bits/stdc++.h>
using namespace std ;

int sort (int arr [],int n ){
    int i =0;
    for (int j=1;j<n;j++){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
            i++;
    }
    return arr[n-1];
}
int main (){
    int arr [10]= {4,8,4,9,6,15,7,65,3,9};
    int n =10;
    cout << "The largest element is " << sort(arr,n) << endl;
}