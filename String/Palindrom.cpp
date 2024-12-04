#include <iostream>
using namespace std;
int getLength(char name[]){
    int count =0;
    for (int i =0;name[i]!='\0';i++){
        count ++;
    }
    return count ;
}
bool check(char name[]){
    int n = getLength(name);
    int start = 0;
    int end = n-1;

    while(start < end ){
        if(name[start]!=name[end]){
            return 0;
        }else{
            start++;
            end--;
        }
    }
    return 1;
}

int main (){
    char name[10];
    cout << "check the name  " << endl;
    cin>> name;
    bool chek= check(name);
    if(chek){
        cout << "It is a pallindrome" << endl;
    }else {
        cout << "it's not a pallindrome " << endl;
    }

}