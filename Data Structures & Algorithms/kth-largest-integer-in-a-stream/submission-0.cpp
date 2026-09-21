class KthLargest {
private:
    // Min-heap containing the k largest elements seen so far.
    // The smallest element in this heap is the current k-th largest.
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int k;

public:
    KthLargest(int k, vector<int>& nums) : k(k) {

        // Process the initial numbers.
        for (int num : nums) {
            minHeap.push(num);

            // Keep only the k largest values.
            // If the heap grows beyond k elements,
            // remove the smallest one.
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }

    int add(int val) {

        // Add the new value from the stream.
        minHeap.push(val);

        // Again, keep only the k largest values seen so far.
        if (minHeap.size() > k) {
            minHeap.pop();
        }

        // The smallest element among the k largest values
        // is exactly the k-th largest overall.
        return minHeap.top();
    }
};