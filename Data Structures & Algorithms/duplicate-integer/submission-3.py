class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        non_duplicated_nums = set(nums)
        return len(non_duplicated_nums) != len(nums)