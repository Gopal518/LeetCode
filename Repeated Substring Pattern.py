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

class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        mainString = ""
        if len(s) <= 1:
            return 0
        for i in s:
            if i not in mainString:
                mainString += i
            else:
                break

        curr = 0
        while curr < len(s):
            if s[curr:curr+len(mainString)] != mainString:
                return False
            curr += len(mainString)

        return True
    
#with Time complexity O(N^2) and Space Complexity O(N)
    class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if len(s) == 1:
            return False

        for i in range(1, len(s)//2 + 1):
            print(s[:i],len(s)//i)
            print("result", s[:i] * (len(s)//i) )
            if s[:i] * (len(s)//i) == s:
                return True

        return False


#with Time complexity O(N) and Space Complexity O(N)
class Solution(object):
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        mainString = 0
        for i in range(1, len(s)//2 +1):
            if len(s)%i == 0:
                if s[:i] * (len(s)//i) == s:
                    return 1
            
        return 0

            
            