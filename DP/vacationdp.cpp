#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>dp(100005, vector<int>(3, -1));
int solve(int n, char prev, vector<vector<int>>&input){
    if(n==0) return 0;
    if(dp[n][prev-'A']!=-1) return dp[n][prev-'A'];
    int op1=0, op2=0;
    if(prev=='A'){
        op1=solve(n-1, 'B', input)+input[n-1][1];
        op2=solve(n-1, 'C', input)+input[n-1][2];
    }
    else if(prev=='B'){
        op1=solve(n-1, 'C', input)+input[n-1][2];
        op2=solve(n-1, 'A', input)+input[n-1][0];
    }
    else{
        op1=solve(n-1, 'A', input)+input[n-1][0];
        op2=solve(n-1, 'B', input)+input[n-1][1];
    }
    return dp[n][prev-'A']=max(op1, op2);
}
int helper(int n, vector<vector<int>>&input){
    return max({solve(n-1, 'A', input)+input[n-1][0], solve(n-1, 'B', input)+input[n-1][1], solve(n-1, 'C', input)+input[n-1][2]});
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n, vector<int>(3, 0));
    for(int i=0; i<n; i++){
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    cout<<helper(n, v);
    return 0;
}


// Time Limit: 2 sec / Memory Limit: 1024 MB

// Score : 
// 100 points

// Problem Statement
// Taro's summer vacation starts tomorrow, and he has decided to make plans for it now.
// The vacation consists of N days. For each i (1≤i≤N), Taro will choose one of the following activities and do it on the i-th day:
// A: Swim in the sea. Gain a i​  points of happiness.
// B: Catch bugs in the mountains. Gain b i​points of happiness.
// C: Do homework at home. Gain c i​points of happiness.
// As Taro gets bored easily, he cannot do the same activities for two or more consecutive days.
// Find the maximum possible total points of happiness that Taro gains.
