class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int ,vector<int>, greater<int> > minHeap;

        // add elements to minHeap
        // but keep only the k-th largest elements
        for (int num : nums) {
            minHeap.push(num);

            // Keep only the k largest values.
            // If the heap grows beyond k elements,
            // remove the smallest one.
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};
