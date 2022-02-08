/**
 * @file d.cpp
 * @author your name (you@domain.com)
 * @brief https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool mahi(Item a,Item b){
     double ans1 = (double)a.value/(double)a.weight;
     double ans2 = (double)b.value/(double)b.weight;
     return ans1>ans2;
}


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,mahi);
          double sum=0;
        for(int i=0;i<n;i++){
        if(arr[i].weight<=W){
             W-=arr[i].weight;
             sum+=arr[i].value;
        }
        else{
           sum+= ((double)(W*arr[i].value)/(double)arr[i].weight);
           break;
        }
    }
    return sum;
    }
    
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}