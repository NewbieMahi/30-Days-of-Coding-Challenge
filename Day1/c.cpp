/**
 * @file c.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/next-permutation/
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
       int k=nums.size()-2;
        for(;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }else{
            int end;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i]>nums[k]){
                    end = i;
                    break;
                }
            }
            swap(nums[k],nums[end]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    nextPermutation(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";

}