class Solution {
    public String longestCommonPrefix(String[] strs) {
        String result = "";
        if(strs.length == 1)
        {
            return strs[0];
        }
        for(int i = 0 ; i < strs[0].length() ; i++)
        {
            char c = strs[0].charAt(i);
            boolean check = true;
            for(int j = 1 ; j < strs.length ; j++)
            {
                if(i >= strs[j].length()) // Check if index i is within bounds of strs[j]
                {
                    check = false;
                    break;
                }
                if(strs[j].charAt(i) != c)
                {
                    check = false;
                    break;
                }
            }
            if(check)
                result = result + c;
            else
                break;
            
        }
        return result;
    }


}