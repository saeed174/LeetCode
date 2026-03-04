public class Solution {
    public string MakeGood(string s) {
        Stack<char> result = new Stack<char>();
        for(int i = 0 ; i < s.Length ; i++)
        {
            if(result.Count == 0)
            {
                result.Push(s[i]);
            }
            else
            {
                if(Math.Abs(result.Peek() - s[i]) == 32)
                {
                    result.Pop();
                }
                else
                {
                    result.Push(s[i]);
                }
            }
        }
        
        Stack<char> reverse = new Stack<char>();
        while(result.Count > 0)
        {
            reverse.Push(result.Pop());
        }
        
        String finalResult = "";
        while(reverse.Count > 0)
        {
            finalResult += reverse.Pop();
        }
        return finalResult;
    }
}