class Solution {
public:
    int middleSubArray(vector<int>& nums , int l , int m , int h)
    {
        int sum = 0;
        int maxleft = -100001;
        for(int i = m ; i >= 0 ; i--)
        {
            sum += nums[i];
            maxleft = max(maxleft , sum);
        }

        sum = 0;
        int maxright = -100001;
        for(int i = m+1 ; i <= h ; i++)
        {
            sum += nums[i];
            maxright = max(maxright , sum);
        }

        return maxright + maxleft;
    }
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }

        int i = 0;
        int j = nums.size() - 1;
        int mid = (i+j)/2;

        vector<int> leftnums(nums.begin() , nums.begin() + mid+1);
        int left = maxSubArray(leftnums);

        vector<int> rightnums(nums.begin() + mid+1, nums.end());
        int right = maxSubArray(rightnums);

        int middle = middleSubArray(nums , i , mid , j);

        return max(middle , max(left,right));
    }
};