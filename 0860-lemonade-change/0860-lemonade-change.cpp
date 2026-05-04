class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int unit5 = 0;
        int unit10 = 0;
        int unit20 = 0;

        for(int i = 0 ; i < bills.size() ; i++)
        {
            if(bills[i] == 5) unit5++;
            else if(bills[i] == 10)
            {
                if(unit5 > 0)
                {
                    unit10++;
                    unit5--;
                }
                else return false;
            }
            else if(bills[i] == 20)
            {
                if(unit5 > 0 && unit10 > 0)
                {
                    unit20++;
                    unit10--;
                    unit5--;
                }
                else if(unit5 >= 3)
                {
                    unit5 -= 3;
                }
                else return false;
            }
        }

        return true;
    }
};