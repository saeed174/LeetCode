class Solution {
public:
    int arr[64];
    Solution()
    {
        for(int i = 0 ; i < 64 ; i++)
        {
            arr[i] = -1;
        }
    }
    int climbStairs(int n) {
        if(n == 0)
        {
            return 1;
        }
        else if(n < 0)
        {
            return 0;
        }

        if(arr[n] != -1) return arr[n];

        arr[n] = climbStairs(n-1) + climbStairs(n-2);

        return arr[n];
    }
};