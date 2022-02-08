/**
 * @file b.cpp
 * @author your name (you@domain.com)
 * @brief https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int i=1,j=0,maxi=1,platform_need=1;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        platform_need++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        platform_need--;
    	        j++;
    	    }
    	    maxi = max(platform_need,maxi);
    	}
    	return maxi;
}

int main(){
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>dep[i];
    cout<<findPlatform(arr,dep,n)<<"\n";
}