class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l, r = 1, max(piles)
        speed = 1
        while l <= r:
            k = (l + r) // 2
            total = 0
            for pile in piles:
                total += math.ceil(pile / k)
            if total > h:
                l = k + 1
            else:
                speed = k
                r = k - 1
        return speed
