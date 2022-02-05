/**
 * @file f.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

// first solution
int solve(string s){
   set<char>res;
   int i=0,j=0,maxi=0;
   while(i<s.size() && j<s.size()){
       if(res.find(s[j])==res.end()){
           res.insert(s[j]);
           j++;
       }
       else{
           res.erase(s[i]);
           i++;
       }
       maxi = max(maxi,j-i);
   }
   return maxi;
}
// second solution 
int solve2(string s){
   vector<int>map(256,-1);
   int start=-1,maxi=0;
   for(int i=0;i<s.size();i++){
       if(map[s[i]]>start){
           start = map[s[i]];
       }
       map[s[i]] = i;
       maxi = max(maxi,i-start);

   }
   return maxi;
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s)<<"\n";
    cout<<solve2(s)<<"\n";
}