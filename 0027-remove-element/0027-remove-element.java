class Solution {
    public int removeElement(int[] nums, int val) {
        int [] newnums = new int[nums.length];
        int count = 0;
        int j = 0;
        for(int i = 0 ; i <nums.length  ; i++)
        {
            if(nums[i] != val)
            {
                newnums[j++] = nums[i];
            }
            else
            {
                count++;
            }
        }

        for(int i = 0 ; i < (nums.length-count) ; i++)
        {
            nums[i] = newnums[i];
        }
        return nums.length - count;
    }
}