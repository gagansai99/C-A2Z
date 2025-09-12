class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        if len(s)==1:
            return s
        s1=""
        maxi1=0
        for i in range(len(s)):
            maxi2=0
            s2=str(s[i])
            s3=""
            for j in range(i+1,len(s)):
                s2+=s[j]
                if(s2[:]==s2[::-1]):
                    s3=s2
            if len(s3)>len(s1):
                s1=s3
        if len(s1)==0:
            return s[0]
        return s1
