#include <bits/stdc++.h> 
using namespace std;

#define MOD 1000000007

// top-down approach
int solveMem(int n, vector<int>& dp){
    if(n==0){
        return 1;
    }

    if(n<0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n] = (solveMem(n-1,dp)+solveMem(n-2,dp))%MOD;
    return dp[n];
}


// tabulation method
int solveTab(int n){
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;

    for(int i=3;i<=n;i++){
        dp[i] = (dp[i-1]+dp[i-2])%MOD;
    }

    return dp[n];

}

// space optimized approach
int spOpt(int n){
    if(n==0 || n==1){
        return 1;
    }

    int prev2=1;
    int prev1=2;

    for(int i=3;i<=n;i++){
        int curr = (prev1+prev2)%MOD;
        prev2=prev1;
        prev1 = curr;
    }

    return prev1;
}

int main() {


    int nStairs=5;

    vector<int> dp(nStairs+1,-1);

    int ans = spOpt(nStairs);

    cout<<"No of Distinct ways are: "<<ans;
    return 0;
}