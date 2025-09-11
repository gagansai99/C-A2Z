class Solution(object):
    def largestOddNumber(self, num):
        s = ""
        for i in range(len(num) - 1, -1, -1):
            if int(num[i]) % 2 != 0:
                s = num[:i + 1]
                break
        return s


def main():
    sol = Solution()
    
    num1 = "52"
    print(f'Input: "{num1}" -> Output: "{sol.largestOddNumber(num1)}"')

    num2 = "4206"
    print(f'Input: "{num2}" -> Output: "{sol.largestOddNumber(num2)}"')

    num3 = "35427"
    print('Input: "{num3}" -> Output: "{sol.largestOddNumber(num3)}"')


if __name__ == "__main__":
    main()
