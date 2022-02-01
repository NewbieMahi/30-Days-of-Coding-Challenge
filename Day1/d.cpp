/**
 * @file d.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/maximum-subarray/
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
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi_sum=arr[0],maxi_best=arr[0];
    for(int i=1;i<n;i++){
        maxi_sum = max(maxi_sum+arr[i],arr[i]);
        maxi_best = max(maxi_best,maxi_sum);
    }
    cout<<maxi_best<<"\n";
}