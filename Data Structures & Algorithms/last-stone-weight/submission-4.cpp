class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int>> maxHeap;

        for(int i = 0 ; i < stones.size() ; i++) {
            maxHeap.push(stones[i]);
        }

        while(maxHeap.size() > 1) {
            int first = maxHeap.top(); maxHeap.pop();
            int second = maxHeap.top(); maxHeap.pop();

            int diff = first - second;
            if(diff != 0) {
                maxHeap.push(diff);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};
