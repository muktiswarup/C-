// get the length of the sting and reverse the string 
#include<iostream>
using namespace std;
int getLength(char name[]){
    int count =0;
    for (int i =0;name[i]!='\0';i++){
        count ++;
    }
    return count ;
}

void reverseString(char name[]){
    int n= getLength(name);
    int start=0;
    int end= n-1;
    while(start<end){
        swap(name[start],name[end]);
            start++;
            end--;
        
    }
   
}


int main () {
    char name[10];
    cout << "Enter the name to reverse " << endl;
    cin>> name;

    // cout << "Enter the name " << endl;
    // cin >> name ;
    // cout << "The length of the array is " << getLength(name);
    reverseString(name);
    cout << name ;
}