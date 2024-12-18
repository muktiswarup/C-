/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    set<int>s;
    s.insert(1);
    s.insert(2);
    for(auto &i:s){
        cout << i << endl ;
    }
    auto it = s.find(3);
    if(it!=s.end()){
        cout << *it ;
    }
} */

/* #include<bits/stdc++.h>
using namespace std ;
void print ( set<string>&s ){
    for(auto &it:s){
        cout << it << endl;
     }
}
int main (){
    set<string>s ;
    s.insert("abcd");
    s.insert("cd");
    s.insert("abd");
    s.insert("acd");
    s.insert("acd");
    print(s);
    auto it =s.find("cd");
    if(it!=s.end()){
        s.erase(it);
    }
    cout << "After erase the cd " << endl ;
    print(s);
} */


/* #include<bits/stdc++.h>
using namespace std ;
 void print ( set<string>&str){
        for (auto it : str){
            cout << it << endl;
        }
    }
int main(){
   
    set<string> str ;
    int n ;
    cout << "no of string " << endl;
    cin >> n ;
    for (int i=0;i<n;i++){
        string st ;
        cin >> st ;
        str.insert(st);
    }
    cout << "after giving the string " << endl ;
    print (str);
    
} */

#include<bits/stdc++.h>
using namespace std ;
 void print ( unordered_set<string> str){
        for (auto it : str){
            cout << it << endl;
        }
    }
int main(){
   
    unordered_set<string> str ;
    int n ;
    cout << "no of string " << endl;
    cin >> n ;
    for (int i=0;i<n;i++){
        string st ;
        cin >> st ;
        str.insert(st);
    }
    cout << "after giving the string " << endl ;
    print (str);
    
}