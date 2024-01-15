'''Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

Example 1:

Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.
Example 2:

Input: s = "aba"
Output: false
Example 3:

Input: s = "abcabcabcabc"
Output: true
Explanation: It is the substring "abc" four times or the substring "abcabc" twice.
 

Constraints:

1 <= s.length <= 104
s consists of lowercase English letters.'''



class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        result = {}
        if len(s) <= 1:
            return 0
        for i in s:
            if i not in result:
                result[i]=1
            else:
                result[i]+=1
        value = result[i]  
        for i in result.keys():
            if value != result[i]:
                return 0
        return 1
            