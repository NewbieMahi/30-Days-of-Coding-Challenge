/**
 * @file d.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/majority-element-ii/
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,num1=-1,num2=-1;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1){
                count1++;
            }else if(nums[i]==num2){
                count2++;
            }else if(count1==0){
                count1=1;
                num1 = nums[i];
            }else if(count2==0){
                count2=1;
                num2 = nums[i];
            }else{
                count1--;
                count2--;
            }
        }
        count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num1) count1++;
            else if(nums[i]==num2) count2++;
        }
        if(count1>(nums.size()/3)) v.push_back(num1);
        if(count2>(nums.size()/3)) v.push_back(num2);
        return v;
    }

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
      cin>>v[i];
    vector<int>ans = majorityElement(v);
    for(auto x:ans)
      cout<<x<<" ";
    cout<<"\n";
}