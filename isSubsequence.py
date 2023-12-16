'''Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

Example 1:

Input: s = "abc", t = "ahbgdc"
Output: true
Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 

Constraints:

0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.
 

Follow up: Suppose there are lots of incoming s, say s1, s2, ..., sk where k >= 109, and you want to check one by one to see if t has its subsequence. In this scenario, how would you change your code?'''

class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        count = 0
        i=0
        j = 0
        while(i<len(s)):
            while(j<len(t)):
                if(s[i]==t[j]):
                    count+=1
                    j+=1
                    break
                j+=1
            i+=1

        
        if(count == len(s)):
            return 1
        else:
            return 0
'''added the linear time complexity and constant space compexity'''
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        majority = 0
        count = 0
        for i in nums:
            if count == 0  and majority != i:
                majority = i
                count = 1
            elif majority == i :
                count+=1
            else:
                count-=1
        return majority