#include<iostream>
using namespace std ;
void print (int *arr ,int s,int e){
    for (int i =s;i<=e;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int *arr,int s ,int e,int k){
    print(arr,s,e);
    if(s>e){
        return false ;
    }
    int mid = s + (e-s)/2;
    
    if(arr[mid]==k){
        return true ;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main (){
    int arr [5]={1,2,3,4,5};
    int s =0;
    int size =5;
    int e =size-1;
    cout << "Enter the key"<<endl;
    int key;
    cin >> key ;
    int ans = binarySearch(arr,s,e,key);
    if(ans){
        cout << "FAOUND" << endl;
    }else {
        cout << "Not Found" << endl;
    }


}