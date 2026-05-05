class Solution {
public:
    vector<int> mergeSort(vector<int>& nums)
    {
        if(nums.size() == 1)
        {
            return {nums[0]};
        }

        int l = 0;
        int h = nums.size() - 1;
        int m = (l+h)/2;

        vector<int> left(nums.begin() , nums.begin()+m+1);
        left = mergeSort(left);
        vector<int> right(nums.begin()+m+1 , nums.end());
        right = mergeSort(right);

        return merge(right , left);
    }

    vector<int> merge(vector<int> right , vector<int> left)
    {
        int i = 0;
        int j = 0;
        vector<int> result;
        while(i < right.size() && j < left.size())
        {
            if(right[i] < left[j]) result.push_back(right[i++]);
            else result.push_back(left[j++]);
        }

        while(i < right.size()) result.push_back(right[i++]);
        while(j < left.size())  result.push_back(left[j++]);

        return result;
    }
        int largestSumAfterKNegations(vector<int>& nums, int k) {
        vector<int> arranged = mergeSort(nums);
        bool allpositive = false;
        if(arranged[0] >= 0)
        {
            allpositive = true;
            
        }
        int i = 0;
        while(k > 0)
        {
            if(allpositive)
            {
                if(k%2 != 0)
                {
                    arranged[0] *= -1;
                }
                break;
            }
            if(arranged[i] > 0)
            {
                i = 0;
                arranged = mergeSort(arranged);
                allpositive = true;
                continue;
            }
            else if(arranged[i] == 0)
            {
                break;
            }
            else arranged[i] *= -1;

            k--;
            i = (i+1)%arranged.size();
        }

        int sum = 0;
        for(int j = 0 ; j < arranged.size()  ; j++)
        {
            sum += arranged[j];
        }

        return sum;
    }
};