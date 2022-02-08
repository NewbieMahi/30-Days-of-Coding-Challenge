/**
 * @file c.cpp
 * @author Mahesh Thorat
 * @brief https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#
 * @version 0.1
 * @date 2022-02-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/
bool mahi( Job a, Job b){
    return a.profit>b.profit;
}
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int brr[n];
        for(int i=0;i<n;i++){
            brr[i]=-1;
        }
        vector<int>v;
        sort(arr,arr+n,mahi);
        int countt=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
                if(brr[j]==-1){
                    brr[j]=arr[i].id;
                    sum+=arr[i].profit;
                    countt++;
                    break;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<brr[i]<<" ";
        // }
        // cout<<"\n";
        v.push_back(countt);v.push_back(sum);
        return v;
        
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}