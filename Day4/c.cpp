/**
 * @file c.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/longest-consecutive-sequence/
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums){
    set<int>s(nums.begin(),nums.end());
    int maxi=0,j=0;
    for(auto x:s){
        if(s.count(x-1))continue;
        j=1;
        while(s.count(x+j))j++;
        maxi = max(maxi,j);
    }
     return maxi;
} 

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<solve(v)<<"\n";
}