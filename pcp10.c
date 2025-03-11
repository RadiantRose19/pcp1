int lengthOfLIS(int* nums, int numsSize) {
    if (numsSize == 0)
        return 0;
    int dp[numsSize];
    int length = 1;
    for (int i = 0; i < numsSize; i++) {
        dp[i] = 1;
    }
    for (int i = 1; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
            }
        }
    }
    for (int i = 0; i < numsSize; i++) {
        if (length < dp[i]) {
            length = dp[i];
        }
    }
    return length;
}
