public class Solution {
    public int[] PlusOne(int[] digits) {
        int addone = 1;
        int[] result = new int[digits.Length+1];
        for(int i = digits.Length-1 ; i >= 0 ; i--)
        {
            result[i] = digits[i] + addone;
            if(result[i] > 9)
            {
                result[i] = 0;
                addone = 1;
            }
            else{
                addone = 0;
            }
        }

        if(addone == 1)
        {
            result[0] = 1;
            return result;
        }
        else
        {
            int[] result2 = new int[digits.Length];
            Array.Copy(result,result2,digits.Length);
            return result2;
        }
    }
}