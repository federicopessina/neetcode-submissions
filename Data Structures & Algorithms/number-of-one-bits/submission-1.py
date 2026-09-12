class Solution:
    def hammingWeight(self, n: int) -> int:
        res = 0
        while n > 0:
            # 00000000000000000000000000010111 and (use & for bits)
            # 00000000000000000000000000000001 =
            # 00000000000000000000000000000001
            if (n & 1) == 1:
                res += 1
            n = n >> 1
        return res