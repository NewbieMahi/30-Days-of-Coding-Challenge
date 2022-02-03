/**
 * @file a.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/search-a-2d-matrix/
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,target;
    cin>>n>>m>>target;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    bool ans=false;
    int start=0,end = m*n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        int curr = v[mid/m][mid%m];

        if(curr>target){
            end = mid-1;
        }else if(curr<target){
            start = mid+1;
        }else{
            ans= true;
            break;
        }
    }if(ans) cout<<"YES Element found\n";
    else cout<<"NO\n";
}