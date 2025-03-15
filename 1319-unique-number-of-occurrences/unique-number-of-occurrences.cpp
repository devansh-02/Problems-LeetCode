class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
                unordered_map<int, int> freq;
                        unordered_set<int> uniqueFreq;
                                
                                        // Count occurrences of each number
                                                for (int num : arr) {
                                                            freq[num]++;
                                                                    }

                                                                            // Check if occurrences are unique
                                                                                    for (const auto& pair : freq) {
                                                                                                if (!uniqueFreq.insert(pair.second).second) {
                                                                                                                return false; // If duplicate count found
                                                                                                                            }
                                                                                                                                    }

                                                                                                                                            return true;
    }
};