public class Solution {
    public int MinimumPairRemoval(int[] nums) {
        int count = 0;
        while(!isSorted(nums))
        {
            int minSum = nums[0] + nums[1];
            int index = 0;
            for(int i = 1 ; i < nums.Length-1 ; i++)
            {
                if((nums[i] + nums[i+1]) < minSum)
                {
                    minSum = nums[i] + nums[i+1];
                    index = i;
                }
            }

            nums[index] += nums[index + 1];
            for(int i = index + 1 ; i < nums.Length - 1 ; i++)
            {
                nums[i] = nums[i + 1];
            }
            nums[nums.Length - 1-count] = 50001;
            count++;
        }
        

        return count;
    }

    public bool isSorted(int[] nums){
        for(int i = 0 ; i < nums.Length-1 ; i++)
        {
            if(nums[i] > nums[i+1])
            return false;
        }
        return true;
    }

}