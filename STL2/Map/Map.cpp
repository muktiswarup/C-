/* #include<bits/stdc++.h>
using namespace std ;
int main (){
    map <int,string> m;
    m[1]= "abc";
    m[3]= "def";
    m[2]= "fvb";
    m.insert({0,"lkj"});
    for (auto &i:m){
        cout << i.first << " " << i.second<< endl;
    }
    auto it=m.find(3);
    if(it!=m.end()){
        cout << (*it ).first << " " << (*it ).second ;
    }

} */

#include<bits/stdc++.h>
using namespace std ;
int main (){
    map<string,int>m;
    int n ;
    cin >> n ;
    for (int i =0;i<n;i++){
        string st ;
        cin >> st;
        m[st]++;
    } 


    for (auto &s:m){
        cout << (s).first<< " "<< (s).second << endl;
    }
}