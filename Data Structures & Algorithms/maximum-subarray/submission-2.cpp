class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int len = nums.size();
        int index = 0;
        int sum = 0, maxSum = INT_MIN;

        if (len == 1) return nums[0];

        while (index < len) {
            sum = sum + nums[index];
            maxSum = max(maxSum, sum);
            
            if (sum < 0) {
                sum = 0;
            }
            
            index++;    
        }

        return maxSum;
    }
};
