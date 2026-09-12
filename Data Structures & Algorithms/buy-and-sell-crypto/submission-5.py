class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProfit = 0
        for l in range(0, len(prices)):
            for r in range(l + 1, len(prices)):
                calcProfit = prices[r] - prices[l]
                maxProfit = max(maxProfit, calcProfit)
        return maxProfit
