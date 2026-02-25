int maxSubarraySumCircular(int* nums, int numsSize) {
    int total = 0;
    int maxSum = nums[0], curMax = 0;
    int minSum = nums[0], curMin = 0;

    for (int i = 0; i < numsSize; i++) {
        curMax = (curMax > 0 ? curMax : 0) + nums[i];
        if (curMax > maxSum) maxSum = curMax;

        curMin = (curMin < 0 ? curMin : 0) + nums[i];
        if (curMin < minSum) minSum = curMin;

        total += nums[i];
    }

    if (maxSum < 0) return maxSum;

    return (total - minSum > maxSum) ? (total - minSum) : maxSum;
}