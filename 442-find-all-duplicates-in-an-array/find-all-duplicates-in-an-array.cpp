class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,bool>mpp;
        vector<int>ans;
        for(int num:nums)
        {
            if(mpp[num])
            ans.push_back(num);

            else
            mpp[num]=true;
        }
        return ans;
    }
};