class Solution {
public:
    vector<int> mem;
    int minCostClimbingStairs(vector<int>& cost) {
        mem.resize(cost.size(), -1);
        int start0 = minCost(cost , 0);
        int start1 = minCost(cost , 1);

        return min(start0 , start1);
    }

    int minCost(vector<int>& cost , int pos)
    {
        if(pos >= cost.size())
        {
            return 0;
        }
        else if(pos == cost.size() - 1)
        {
            return cost[pos];
        }
        else if(pos == cost.size() - 2)
        {
            return cost[pos];
        }

        if(mem[pos] != -1) return mem[pos];

        int total = 0 , step1 = 0 , step2 = 0;
        step1 =  cost[pos] + minCost(cost , pos + 1);
        step2 =  cost[pos] + minCost(cost , pos + 2);
        total = min(step1 , step2);
        mem[pos]= total;
        return total;
    }
};