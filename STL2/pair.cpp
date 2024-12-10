#include <bits/stdc++.h>
using namespace std ;
int main (){
    pair<int,string>p[5];
   p[0]={1,"ms"};
   p[1]={2,"cs"};
   p[2]={3,"ds"};
   p[3]={4,"ms"};
   p[4]={5,"es"};
   for (int i =0;i<5;i++){
    cout << p[i].first << " " << p[i].second << endl;
   }
}