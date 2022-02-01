/**
 * @file a.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/set-matrix-zeroes/
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
        int first =1;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][0]==0) first=0;
            for(int j=1;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = matrix[0][j] =0;
                }
            }
        }
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=matrix[i].size()-1;j>0;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j] = 0;
            }
            if(first==0){
                matrix[i][0] = 0;
            }
        }
}

int main(){
   int n,m;
   cin>>n>>m;
   vector<vector<int>>v(n,vector<int>(m));
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cin>>v[i][j];
      }
   }
   setZeroes(v);
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cout<<v[i][j]<<" ";
      }
      cout<<"\n";
   }

}