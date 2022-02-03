/**
 * @file c.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/majority-element/
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// Moore's voting algorithm
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
      int maxi =nums[0];
      int count=1;
      for(int i=1;i<nums.size();i++){
          if(count==0){
              count++;
              maxi = nums[i];
          }
          else if(nums[i]==maxi)
              count++;
          else
              count--;
      }
        return maxi;
      
    }

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    cout<<majorityElement(v)<<"\n";
    
}