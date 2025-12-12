class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        s1_counter = [0] * 26
        s2_counter = [0] * 26

        for i in range(len(s1)):
            s1_counter[ord(s1[i]) - ord('a')] += 1
            s2_counter[ord(s2[i]) - ord('a')] += 1

        matches = 0
        for i in range(26):
            if s1_counter[i] == s2_counter[i]:
                matches += 1

        l = 0
        for r in range(len(s1), len(s2)):
            if matches == 26:
                return True

            r_index = ord(s2[r]) - ord('a')
            s2_counter[r_index] += 1
        
            if s2_counter[r_index] == s1_counter[r_index]:
                matches += 1
            elif s2_counter[r_index] == s1_counter[r_index] + 1:
                matches -= 1

            l_index = ord(s2[l]) - ord('a')
            s2_counter[l_index] -= 1

            if s2_counter[l_index] == s1_counter[l_index]:
                matches += 1
            elif s2_counter[l_index] == s1_counter[l_index] - 1:
                matches -= 1

            l += 1

        return matches == 26
