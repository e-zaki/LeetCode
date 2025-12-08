class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        count = {}
        left = 0
        maxLen = 0
        max_freq = 0

        for right in range(len(s)):
            curChar = s[right]
            count[curChar] = count.get(curChar, 0) + 1
            max_freq = max(max_freq, count[curChar])
            curLen = right - left + 1

            if curLen > k + max_freq:
                count[s[left]] -= 1
                left += 1

            maxLen = right - left + 1
        
        return maxLen