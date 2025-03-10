#include <stdio.h>
int ways(int n) {
    int dp[n+1];
    dp[0]=1;
    
    for(int i=1;i<=n;i++) {
        dp[i] = dp[i-1];
        
        if(i>=2)
            dp[i]+=dp[i-2];
            
        if(i>=3)
            dp[i]+=dp[i-3];
    }
    return dp[n];
}

int main() {
    int n;
    printf("Enter the target score:");
    scanf("%d", &n);
    
    printf("No of ways to reach %d: %d\n", n, ways(n));
    
}
