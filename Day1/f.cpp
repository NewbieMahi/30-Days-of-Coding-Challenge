/**
 * @file f.cpp
 * @author Mahesh Thorat
 * @brief problem link = https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * @version 0.1
 * @date 2022-02-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */



#include<bits/stdc++.h>
#define pb push_back
#define mod 1000000007
#define mod2 998244353
#define lld long double
#define pii pair<int, int>
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
typedef long long ll;
using namespace std;


int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int last = prices[n-1],maxi=0;
        for(int i=n-2;i>=0;i--){
            if(prices[i]>=last)
                 last = prices[i];
            else{
               maxi = max(maxi,last-prices[i]);
            }
        }
        return maxi;
    }

int main()
{
   
   int n;
   cin>>n;
   vector<int>prices(n);
   for(int i=0;i<n;i++){
       cin>>prices[i];
   }
   cout<<maxProfit(prices)<<"\n";
  
   return 0;
}