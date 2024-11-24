// find the no of occurance in an array  {2,5,3,3,3,5} 3 is 3 time 

#include<iostream>
using namespace std;
int firstOccurance (int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }else if (key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
  return ans ;
}
int lastOccurance (int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }else if (key>arr[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end-start)/2;
    }
   return ans ;
}
int totalOccurance(int arr[],int size,int key){
    int first=firstOccurance(arr,size,key);
    int second=lastOccurance(arr,size,key);
    if(first==-1){
        return 0;
    }
    if(second==-1){
        return 0;
    }
    return (second-first)+1;
}
int main(){
    int arr[]= {2,3,4,4,4,5};
    int size =6;
    int key=4;
    cout<< "The total occurance of the 4 is :" <<  totalOccurance(arr,size,key)<<endl;
    return 0;
}