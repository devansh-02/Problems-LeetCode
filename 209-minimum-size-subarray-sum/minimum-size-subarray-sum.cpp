class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int right=0;
        int left=0;
        int mini=INT_MAX;;
        int sum=0;
        while(right<n)
        {
            sum=sum+nums[right];
            
            while(sum>=target)
            {
                mini=min(mini,right-left+1);
                sum=sum-nums[left];
                left++;
            }
            right++;
        }
        if(mini==INT_MAX)
        return 0;
        return mini;
    }
};