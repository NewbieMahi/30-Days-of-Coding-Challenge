/**
 * @file f.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/max-consecutive-ones/
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                c++;
            else{
                maxi = max(maxi,c);
                c=0;
            }
        }
        maxi = max(maxi,c);
        return maxi;
    }

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
    cout<<findMaxConsecutiveOnes(v)<<"\n";
    
}