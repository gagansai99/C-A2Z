class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip()
        words = s.split()
        words.reverse()
        return " ".join(words)


def main():
    sol = Solution()
    
    s1 = "  the sky  is blue  "
    print(f'Input: "{s1}"')
    print(f'Output: "{sol.reverseWords(s1)}"')
    
    s2 = " hello world "
    print(f'Input: "{s2}"')
    print(f'Output: "{sol.reverseWords(s2)}"')
    
    s3 = "a good   example"
    print(f'Input: "{s3}"')
    print(f'Output: "{sol.reverseWords(s3)}"')


if __name__ == "__main__":
    main()
