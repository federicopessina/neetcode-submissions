class Solution:
    def countBits(self, n: int) -> List[int]:
        res = []
        for i in range(n + 1):
            num_of_1 = 0
            num = i
            for j in range(32):
                if (num & 1) == 1:
                    num_of_1 +=1
                num = num >> 1
            res.append(num_of_1)
        return res 