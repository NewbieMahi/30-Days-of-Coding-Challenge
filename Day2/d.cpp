/**
 * @file d.cpp
 * @author Mahesh Thorat
 * @brief  problem link = https://leetcode.com/problems/find-the-duplicate-number/
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int ind = abs(nums[i])-1;
            nums[ind]*=-1;
            if(nums[ind]>0){
                return abs(nums[i]);
            }
        }
        return -1;   
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    cout<<findDuplicate(v)<<"\n";
    
}