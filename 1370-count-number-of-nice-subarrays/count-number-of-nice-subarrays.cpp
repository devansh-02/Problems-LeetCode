class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int goal) {
        auto countAtMost = [&](int goal) {
            if(goal<0)return 0;
            int right=0;
            int left=0;
            int sum=0;
            int count=0;
             while(right<nums.size())
                {
                    sum+=nums[right]%2;
                    while(sum>goal)
                    {
                        sum=sum-nums[left]%2;
                        left++;
                    }
                    count=count+(right-left+1);
                    right++;
                }
                return count;
        };
        return countAtMost(goal) - countAtMost(goal - 1);
    }
};