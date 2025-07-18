class Solution {
    public int removeDuplicates(int[] nums) {
        int j = 0;
        int  [] newnum = new int[nums.length];
        if (nums == null || nums.length == 0) {
            return 0;
        }
        else
        {
            newnum[j++] = nums[0];
            for(int i = 1 ; i < nums.length ; i++)
            {
                if (nums[i] != nums[i - 1]) {
                    newnum[j++] = nums[i];
                }
            }
        }

        for (int k = 0; k < j; k++) {
            nums[k] = newnum[k];
        }
        return j;
    }
}