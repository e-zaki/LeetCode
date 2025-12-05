class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        l_speed = 1
        r_speed = max(piles)
        speed = 1
        while l_speed <= r_speed:
            mid_speed = (l_speed + r_speed) // 2
            time_needed = 0
            for pile in piles:
                time_needed += math.ceil(pile / mid_speed)
            if time_needed > h:
                l_speed = mid_speed + 1
            else:
                speed = mid_speed
                r_speed = mid_speed - 1
        return speed
