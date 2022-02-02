/**
 * @file b.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/merge-intervals/
 * @version 0.1
 * @date 2022-02-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int>a, vector<int>b){
        if(a[0]==b[0])
            return a[0]>b[1];
        return a[0]<b[0];
    }
vector<vector<int>> merge(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),compare);
        vector<vector<int>>ans;
        vector<int>temp;
        temp.push_back(v[0][0]);
        int maximum = v[0][1];
        for(int i=1;i<v.size();i++){
            if(v[i][0]<=maximum){
                maximum = max(v[i][1],maximum);
            }else{
                temp.push_back(maximum);
                ans.push_back(temp);
                temp.clear();
                temp.push_back(v[i][0]);
                maximum = v[i][1];
            }
        }
        temp.push_back(maximum);
        ans.push_back(temp);
        return ans;
        
    }

int main(){
    int n;
    cin>>n;
    int m  =2;
    vector<vector<int>> v( n , vector<int> (m));
    for(int i=0;i<n;i++){
      cin>>v[i][0]>>v[i][1];
    }
    vector<vector<int>>ans = merge(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }


}