class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int c=0;
            int temp=nums[i];
            while(temp>0)
            {
            temp/=10;
            c++;
            }
            if(c%2==0)
            count++;
        }
        return count;
    }
};