class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int left=0;
        int right=0;
        int maxLength=0;
        vector<int> hash(256, -1);
        
        
        while(right<n)
        {
            if(hash[s[right]] != -1)
            {
                if(hash[s[right]] >= left)
                {
                    left=hash[s[right]]+1;
                }
            }
            maxLength=max(maxLength, right-left+1);
            hash[s[right]]=right;
            right++;
        }
        return maxLength;
    }
};