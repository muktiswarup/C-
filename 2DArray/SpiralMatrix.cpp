//Leett code no54 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;

        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total) {
            // Traverse from left to right along the top row
            for (int index = startingCol; count < total && index <= endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++; // Move the starting row downward

            // Traverse from top to bottom along the right column
            for (int index = startingRow; count < total && index <= endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--; // Move the ending column leftward

            // Traverse from right to left along the bottom row
            for (int index = endingCol; count < total && index >= startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--; // Move the ending row upward

            // Traverse from bottom to top along the left column
            for (int index = endingRow; count < total && index >= startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++; // Move the starting column rightward
        }

        return ans;
    }
};





/* #include<bits/stdc++.h>
using namespace std ;
vector<int>ans ;
vector<int> spiralOrder(vector<vector<int>>&arr){
    int count =0;
    int n =arr.size();
   int m =arr[0].size();
  int startingRow=0;
  int startingCol=0;
  int endingRow=n-1;
  int endingCol=m-1;
  int total = m*n;
  while (count <total){
  for (int index=startingCol;count <total &&index<=endingCol;index++){
     ans.push_back( arr[startingRow][index]);
     count=count+1;
  }
  startingRow++;
  cout << endl;
  for (int index =startingRow;count <total && index<=endingRow;index++ ){
     ans.push_back(arr[index][endingCol]);
     count=count+1;
  }
  endingCol--;
  cout << endl;
  for(int index=endingCol;count <total && index>=startingCol;index--){
     ans.push_back( arr[endingRow][index]);
     count=count+1;
  }
  endingRow--;
  cout <<endl;
  for (int index=endingRow;count <total && index>=startingRow;index--){
     ans.push_back(arr[index][startingCol]);
     count=count+1;
  }
  startingCol++;
  cout <<endl;
  }
  return ans ;
}

int main (){
   vector<vector<int>>arr= {
       {1,2,3},
       {5,6,4},
       {7,8,9}
   };
   vector<int>result=spiralOrder(arr);
   for (int i :result){
       cout << i << " ";
   }
   cout<< endl;
} */
