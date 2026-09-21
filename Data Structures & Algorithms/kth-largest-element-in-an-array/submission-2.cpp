class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // instantiate a max-heap
        priority_queue<int, vector<int>, less<int>> maxHeap;

        // add all the elements to the max-heap
        for (int num : nums) {
            maxHeap.push(num);
        }

        // remove the largest (k - 1) elements
        for (int i = 0; i < k - 1; i++) {
            maxHeap.pop();
        }

        // get the new top (the initial k-th element)
        return maxHeap.top();
    }
};
