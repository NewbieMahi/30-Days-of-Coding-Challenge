/**
 * @file d.cpp
 * @author your name (you@domain.com)
 * @brief https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

 int maxLen(vector<int>&A, int n)
    {   
         unordered_map<int,int>mp;
         int sum=0,maxi=-1;
         for(int i=0;i<n;i++){
             sum+=A[i];
             if(sum==0){
                 maxi = max(maxi,i+1);
             }
             if(mp.find(sum)!=mp.end()){
                 maxi = max(maxi,i-mp[sum]);
             }else{
                 mp[sum] = i;
             }
         }
         return maxi>=0?maxi:0;
    }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
     cin>>arr[i];
   cout<<maxLen(arr,n)<<"\n";

}