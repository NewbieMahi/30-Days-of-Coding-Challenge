/**
 * @file a.cpp
 * @author your name (you@domain.com)
 * @brief https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

 bool static compare(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first<b.first;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int  i=0;i<n;i++){
            v.push_back(make_pair(end[i],start[i]));
        }
        sort(v.begin(),v.end(),compare);
        int curr = v[0].first;
        int count = 1;
        for(int i=1;i<n;i++){
            if(v[i].second>curr){
                curr = v[i].first;
                count++;
            }
        }
        return count;
        
}

int main()
{
    int n;
    cin>>n;
    int start[n],end[n];
    for(int i=0;i<n;i++) cin>>start[i];
    for(int j=0;j<n;j++) cin>>end[j];
    cout<<maxMeetings(start,end,n)<<"\n";
}