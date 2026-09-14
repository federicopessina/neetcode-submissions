class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        unordered_set<int> seen;
        vector<vector<int>> result;
        int size = nums.size();
        
        for (int index = 0; index < size - 2; index++) {
            int left = index + 1, right = size - 1;


            if (seen.contains(nums[index])) {
                continue;
            } else {
                seen.insert(nums[index]);
            }

            while (left < right) {
                int sum = nums[index] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({
                        nums[index],
                        nums[left],
                        nums[right]
                    });

                    left++; right--;

                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;

                    continue;
                }

                if (sum < 0) {
                    left++; continue;
                }

                if (sum > 0) {
                    right--; continue;
                }
            }
        }


        return result;
    }
};