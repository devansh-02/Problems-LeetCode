class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& arr) {
        int n=arr.size();
        set<int> sn;
    
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                if(count==2)
                sn.insert(arr[i]);
            }
        }
        return vector<int>(sn.begin(), sn.end());
    }
};