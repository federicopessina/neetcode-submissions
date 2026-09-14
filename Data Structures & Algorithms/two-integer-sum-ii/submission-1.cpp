class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        const int len = numbers.size();

        int left = 0, right = len - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            
            if (sum == target) {
                // note: return index w/ -1
                return { left + 1, right + 1};
            }

            if (sum < target) {
                left++;
                continue;
            }

            if (sum > target) {
                right--;
                continue;
            }
        }

        return {};
    }
};
