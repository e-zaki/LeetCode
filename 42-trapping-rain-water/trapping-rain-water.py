class Solution:
    def trap(self, height: List[int]) -> int:
        area = 0
        l, r = 0, len(height) - 1
        maxRight = height[r]
        maxLeft = height[l]
        while l <= r:
            if maxRight > maxLeft:
                maxLeft = max(maxLeft, height[l])
                area += maxLeft - height[l]
                l += 1
            else:
                maxRight = max(maxRight, height[r])
                area += maxRight - height[r]
                r -= 1
        return area