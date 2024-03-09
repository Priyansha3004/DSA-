#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(10000, vector<int>(10000, -1));
int knapsack(int n, int W, int*wt, int *val ){
    if(n==0||W==0)return 0;
    if(dp[n][W]!=-1) {
        return dp[n][W];
    }
int option1 = knapsack(n-1, W, wt, val);
int option2 = 0;
if(W- wt[n-1]>=0){
    option2 = knapsack(n-1, W-wt[n-1], wt, val)+val[n-1];
}
return dp[n][W]=max(option1, option2);
}
int knapsackT(int n, int W, int*wt, int *val){
    vector<vector<int>>dp2(n+1, vector<int> (W+1,0));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= W; j++){
            if(j-wt[i-1]>=0){
                dp2[i][j]= max(dp2[i-1][j], dp2[i-1][j-wt[i-1]] + val[i-1]);
            }
            else{
                dp2[i][j]=dp2[i-1][j];
            }
        }
    }
    return dp2[n][W];
}
