/**
 * @file e.cpp
 * @author your name (you@domain.com)
 * @brief https://www.interviewbit.com/problems/subarray-with-given-xor/
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
     unordered_map<int,int>mp;
    int ans=0,count=0;
    int n1 = A.size();
    for(int i=0;i<n1;i++){
        ans^=A[i];
        if(ans==B)
          count++;
        if(mp.find(ans^B)!=mp.end())
          count+=mp[ans^B];
        mp[ans]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int b;
    cin>>b;
    cout<<solve(v,b)<<"\n";
}
