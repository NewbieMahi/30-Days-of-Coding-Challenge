/**
 * @file e.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int start=0,i=1;
        while(i<nums.size() ){
           if(nums[i]==nums[start]){
               i++;
           }else{
               start++;
               swap(nums[i],nums[start]);
               i++;
           }
        }
        return start+1;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int last = removeDuplicates(v);
    for(int i=0;i<last;i++){
        cout<<v[i]<<" ";
    }

}