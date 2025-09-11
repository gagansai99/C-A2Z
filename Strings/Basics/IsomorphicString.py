class Solution(object):
    def isIsomorphic(self, s, t):
        if len(s) != len(t):
            return False

        d1 = {}
        d2 = {}

        for i in range(len(s)):
            if s[i] in d1 and d1[s[i]] != t[i]:
                return False
            else:
                d1[s[i]] = t[i]

            if t[i] in d2 and d2[t[i]] != s[i]:
                return False
            else:
                d2[t[i]] = s[i]

        return True


def main():
    sol = Solution()
    
    test_cases = [
        ("egg", "add"),
        ("foo", "bar"),
        ("paper", "title"),
        ("badc", "baba")
    ]
    
    for s, t in test_cases:
        print(f'Input: s="{s}", t="{t}" -> Output: {sol.isIsomorphic(s, t)}')


if __name__ == "__main__":
    main()
