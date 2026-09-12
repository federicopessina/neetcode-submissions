class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit, n = 0, len(prices)
        for l in range(n):
            for r in range(l + 1, n):
                print("l: " + str(l) + " r: " + str(r)) # DEBUG
                profit = max(profit, prices[r] - prices[l])
                print("profit: " + str(profit))
                if prices[r] < prices[l]:
                    l = r
        return profit

        