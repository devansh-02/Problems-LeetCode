class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int ,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it: mpp)
        {
            if(it.second==1)
            ans.push_back(it.first);
        }
        return ans;
          

        


    }
};