class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        auto countAt=[&](int k){
        int n=nums.size();
        int right=0;
        int left=0;
        int count=0;
        map<int,int>mpp;
        while(right<n)
        {
            mpp[nums[right]]++;
            while(mpp.size()>k)
            {
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0)
                mpp.erase(nums[left]);
                left++;
            }
            count=count+right-left+1;
            right++;
        }
        return count;
    };
    return countAt(k)-countAt(k-1);
    }
};