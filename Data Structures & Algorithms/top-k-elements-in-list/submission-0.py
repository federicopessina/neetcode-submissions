class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = dict()
        freq = [[] for i in range(len(nums) + 1)]

        for n in nums:
            # if count is not gettable
            # then set 0 as default
            # otherwise increate its value by 1
            count[n] = 1 + count.get(n, 0)
        
        #for key, value
        for n, c in count.items():
            freq[c].append(n)

        # memo we want the top k elements
        res = []
        for i in range(len(freq) - 1, 0, -1):
            for n in freq[i]:
                res.append(n)
                if len(res) == k:
                    return res