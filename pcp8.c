#include <stdio.h>
#include <string.h>

int LCS(char a1[], char a2[]) {
    int m = strlen(a1);
    int n = strlen(a2);
    int dp[m+1][n+1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a1[i-1] == a2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = (dp[i-1][j] > dp[i][j-1]) ? dp[i-1][j] : dp[i][j-1];
        }
    }

    return dp[m][n];
}

int main() {
    char a1[] = "babbab";  
    char a2[] = "abaaba";

    int res = LCS(a1, a2);
    printf("length of the lcs: %d\n", res);

    return 0;
}
