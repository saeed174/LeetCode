public class Solution {
    public int FindTheWinner(int n, int k) {
        List<int> vect = new List<int>();
        for(int i = 1 ; i <= n ; i++)
        {
            vect.Add(i);
        }

        int pointer = 0;

        while(vect.Count > 1)
        {
            pointer = (pointer + (k - 1)) % vect.Count;
            vect.RemoveAt(pointer);
        }

        return vect[0];
    }
}