/**
 * @file e.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/unique-paths/
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<bits/stdc++.h>
using namespace std;

int uniquePaths(int m, int n) {
        int dp[m][n];
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1){
                    dp[i][j] =1;
                }
                else if(i==m-1){
                    dp[i][j] = dp[i][j+1];
                }
                else if(j==n-1){
                    dp[i][j] = dp[i+1][j];
                }else{
                    dp[i][j] = dp[i+1][j]+dp[i][j+1];
                }
            }
        }
        return dp[0][0];
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<uniquePaths(n,m)<<"\n";

}