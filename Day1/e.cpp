/**
 * @file e.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/sort-colors/
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int low=0,curr=0,high=n-1;
    while(curr<=high){
        if(arr[curr]==0){
            swap(arr[low],arr[curr]);
            curr++;
            low++;
        }else if(arr[curr]==1){
            curr++;
        }else {
            swap(arr[high],arr[curr]);
            high--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}