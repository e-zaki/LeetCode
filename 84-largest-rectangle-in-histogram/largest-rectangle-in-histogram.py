class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = []
        maxArea = 0
        n = len(heights)

        for i, h in enumerate(heights):
            start = i

            while stack and stack[-1][1] > h:
                start, height = stack.pop()
                maxArea = max(maxArea, height * (i - start))

            stack.append((start, h))

        for e in stack:
            maxArea = max(maxArea, e[1] * (n- e[0]))

        return maxArea
                