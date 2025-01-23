/* #include<iostream>
using namespace std ;
bool linearserch(int *arr,int size ,int key){
    if(size==0){
        return false ;
    }
    if(arr[0]==key){
        return true;
    }
    bool ans = linearserch(arr+1,size-1,key);
    return ans;
}
int main (){
    int arr[5]= {15,4,8,9,7};
    int size = 5;
    int key =4;
    int ans = linearserch(arr,size,key);
    if(ans){
        cout << "Element found" << endl;
    }else {
        cout << "Element not found" << endl;
    }

} */

#include<iostream>
using namespace std ;
void print (int *arr,int n ){
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
bool linearsearch(int *arr,int size,int key){
    print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true ;
    }
    bool ans = linearsearch(arr+1,size-1,key);
    return ans ;
}
int main (){
    int arr [6]= {4,5,8,9,45,3};
    int size =6;
    int key =3;
    int ans = linearsearch(arr,size,key);
    if(ans){
        cout << "Element found " << endl;
    }else {
        cout << "Elemnt not found " << endl;
    }
}
