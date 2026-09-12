class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        container = dict()
        index = 0
        for n in nums:
            diff = target - n
            if diff in container:
                return [container[diff], index]
            container[n] = index
            index += 1