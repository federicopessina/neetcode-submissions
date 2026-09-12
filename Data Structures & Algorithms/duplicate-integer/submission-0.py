class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        container = set()
        for n in nums:
            if n in container:
                return True # true if any value appears more than once in the array
            container.add(n)
        return False # otherwise return false