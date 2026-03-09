public class Solution {
    public int MinSetSize(int[] arr) {
        Dictionary<int, int> map = new Dictionary<int, int>();

        foreach(int i in arr){
            if(map.ContainsKey(i))
                map[i]++;
            else
                map[i] = 1;
        }

        PriorityQueue<int, int> pq = new PriorityQueue<int, int>();
        foreach (int i in map.Keys)
        {
            ///
            pq.Enqueue(i, -map[i]);
        }

        int count = 0;
        int sizeToHalf = arr.Length ;
        while(sizeToHalf > (arr.Length / 2))
        {
            count++;
            sizeToHalf -= map[pq.Dequeue()];
        }
        return count;
    }
}