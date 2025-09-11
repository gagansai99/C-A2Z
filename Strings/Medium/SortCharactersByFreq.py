class Solution(object):
    def frequencySort(self, s):
        """
        :type s: str
        :rtype: str
        """
        d1 = {}
        for i in s:
            if i in d1:
                d1[i] += 1
            else:
                d1[i] = 1

        l1 = []
        for i in d1.values():
            l1.append(i)
        l1.sort(reverse=True)

        s1 = ""
        for i in range(len(l1)):
            for j in d1.keys():
                if d1[j] == l1[i] and d1[j] != 0:
                    s1 += (j * d1[j])
                    d1[j] = 0
                    break
        return s1


if __name__ == "__main__":
    sol = Solution()

    # Test cases
    print(sol.frequencySort("tree"))      # Output: "eetr" or "eert"
    print(sol.frequencySort("cccaaa"))    # Output: "cccaaa" or "aaaccc"
    print(sol.frequencySort("Aabb"))      # Output: "bbAa" or "bbaA"
