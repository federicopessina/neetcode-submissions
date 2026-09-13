class Solution {
public:
    int search(vector<int>& nums, int target) {
        const int notPresent = -1;
        int l = 0, r = nums.size() - 1; 

        while (l <= r) {
            int m = l + (r - l) / 2; // note
            if (nums[l] == target) {
                return l;
            }
            if (nums[r] == target) {
                return r;
            }
            if (nums[m] == target) {
                return m;
            }

            // case left hand is sorted
            if (nums[l] <= nums[m]) {
                // is target inside the sorted left half?
                if (nums[l] <= target && target < nums[m]) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            // case right hand is sorted
                else {
                // Is target inside the sorted right half?
                if (nums[m] < target && target <= nums[r]) {
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
        }

        return notPresent; 
    }
};
