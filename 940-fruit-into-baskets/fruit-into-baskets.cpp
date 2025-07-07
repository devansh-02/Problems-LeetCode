class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int maxlength=0;
        int right=0;
        int left=0;
        map<int, int>mpp;
        while(right<n)
        {
            mpp[fruits[right]]++;
            while(mpp.size()>2)
            {
                mpp[fruits[left]]--;
                if(mpp[fruits[left]]==0)
                {
                mpp.erase(fruits[left]);
                }
                left++;
            }
            if(mpp.size()<=2)
            {
                maxlength=max(maxlength,right-left+1);
            }
            right++;
        }
        return maxlength;
    }
};