class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // wrn: nums not ordered
        int missingNumber = 0;
        for (int i = 0; i <= nums.size(); i++) {
            missingNumber ^= i;
        }

        for (int num : nums) {
            missingNumber ^= num;
        }

        return missingNumber;
    }
};
