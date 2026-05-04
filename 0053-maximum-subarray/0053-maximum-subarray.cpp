class Solution {
public:
    int maxCrossingSum(vector<int>& nums, int left, int mid, int right) {
        int sum = 0;
        int leftSum = INT_MIN;

        for (int i = mid; i >= left; i--) {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }

        sum = 0;
        int rightSum = INT_MIN;

        for (int i = mid + 1; i <= right; i++) {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }

        return leftSum + rightSum;
    }

    int solve(vector<int>& nums, int left, int right) {
        if (left == right)
            return nums[left];

        int mid = (left + right) / 2;

        int leftMax = solve(nums, left, mid);
        int rightMax = solve(nums, mid + 1, right);
        int crossMax = maxCrossingSum(nums, left, mid, right);

        return max({leftMax, rightMax, crossMax});
    }
    int maxSubArray(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};