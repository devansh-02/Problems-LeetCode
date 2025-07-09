class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        auto countAtMost = [&](int goal) {
            if(goal<0)return 0;
            int right=0;
            int left=0;
            int sum=0;
            int count=0;
            while(right<nums.size())
            {
            
                sum+=nums[right];
                while(sum>goal)
                {
                    sum=sum-nums[left];
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