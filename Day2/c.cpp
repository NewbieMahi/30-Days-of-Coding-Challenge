/**
 * @file c.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/merge-sorted-array/
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int end = m+n-1;
        m--;
        n--;
        while(m>=0 && n>=0){
            if(nums1[m]>nums2[n]){
                nums1[end] = nums1[m];
                m--;
            }else{
                nums1[end] = nums2[n];
                n--;
            }
            end--;
        }
        while(m>=0){
             nums1[end] = nums1[m];
             m--;
             end--;
        }
        while(n>=0){
            nums1[end] = nums2[n];
            n--;
            end--;
        }
    }

int main(){
   int m,n;
   cin>>m>>n;
   vector<int>v1(m+n),v2(n);
   for(int i=0;i<m;i++)
    cin>>v1[i];
   for(int j=0;j<n;j++)
     cin>>v2[j];
   merge(v1,m,v2,n);
   for(int i=0;i<m+n;i++)
   {
       cout<<v1[i]<<" ";
   }
   cout<<"\n";
}