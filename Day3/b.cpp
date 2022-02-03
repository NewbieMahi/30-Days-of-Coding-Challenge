/**
 * @file b.cpp
 * @author your name (you@domain.com)
 * @brief https://leetcode.com/problems/powx-n/
 * @version 0.1
 * @date 2022-02-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
        double ans = 1;
        while(n){
            if(n%2){
                if(n>0)
                    ans*=x;
                else
                    ans/=x;
            }
            x = x*x;
            n/=2;
        }
        return ans;
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    cout<<myPow(x,n)<<"\n";
}