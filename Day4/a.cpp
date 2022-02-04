/**
 * @file a.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/two-sum/
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>mp;
      vector<int>v;
        for(int i=0;i<nums.size();i++){
            int ans = target-nums[i];
            if(mp.find(ans)!=mp.end()){
                v.push_back(i);
                v.push_back(mp[ans]);
                return v;
            }
            mp[nums[i]]=i;
        }
        return v;
}


int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    vector<int>ans = twoSum(v,target);
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<"\n";
    
}