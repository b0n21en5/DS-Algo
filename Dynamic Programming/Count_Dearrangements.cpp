// codestudio question: count dearrangements

#include <bits/stdc++.h>
#define MOD 1000000007

// recursive with memoization
long long int solveMem(int n, vector<long long int> &dp){

    if(n==1){
        return 0;
    }

    if(n==2){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    dp[n]=(((n-1)%MOD)*((solveMem(n-2,dp)%MOD)+(solveMem(n-1,dp)%MOD))%MOD);

    return dp[n];
}

// bottom up approach
long long int solveTab(int n){
    vector<long long int> dp(n+1, 0);

    dp[1]=0;
    dp[2]=1;

    for(int i=3;i<=n;i++){
        long long int first = dp[i-1] % MOD;
        long long int second = dp[i-2] % MOD;
        long long int sum = (first + second)%MOD;

        dp[i] = ((i-1)*sum) % MOD;
    }

    return dp[n];
}

// bottom up with space optimization
long long int spaceOpt(int n){

    long long int prev2 = 0;
    long long int prev1 = 1;

    for(int i=3;i<=n;i++){
        long long int sum = (prev1%MOD + prev2%MOD)%MOD;

        long long int ans = ((i-1)*sum) % MOD;

        prev2=prev1;
        prev1=ans;
    }

    return prev1;
}

long long int countDerangements(int n) {
    // vector<long long int> dp(n+1, -1);

    int ans = spaceOpt(n);

    return ans;
}