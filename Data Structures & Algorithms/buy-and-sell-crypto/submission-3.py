import sys

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        min_price = 9223372036854775807
        max_price = -9223372036854775807
        for l in range(0, len(prices)):
            for r in range(l + 1, len(prices)):
                profit = prices[r] - prices[l]
                if profit > max_profit:
                    max_profit = profit
        return max_profit


        