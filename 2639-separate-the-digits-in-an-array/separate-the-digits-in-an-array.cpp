class Solution {
    public:
        std::vector<int> separateDigits(std::vector<int>& nums) {
                std::vector<int> a;
                        for (int num : nums) {
                                    std::vector<int> temp; // Temporary storage for correct order
                                                while (num > 0) {
                                                                temp.push_back(num % 10);
                                                                                num /= 10;
                                                                                            }
                                                                                                        // Append temp in reverse order
                                                                                                                    a.insert(a.end(), temp.rbegin(), temp.rend());
                                                                                                                            }
                                                                                                                                    return a;
                                                                                                                                        }
                                                                                                                                        };
