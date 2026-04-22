class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0;
        int sum = 0;
        
        for(int i = 0 ; i < k ; i++)
        {
            sum += arr[i];
        }
        int i = 0;
        while(i <= arr.size()-k)
        {
            if((sum/k) >= threshold)
            {
                count++;
            }
            
            if(i == arr.size()-k) break;
            
            sum -= arr[i];
            sum += arr[i+k];
            i++;
        }
        return count;
    }
};