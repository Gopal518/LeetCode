'''Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.'''


class Solution:
    def isValid(self, s: str) -> bool:
        para_dict = {')':'(', ']':'[','}':'{'}
        stack = []
        for i in s:
            if len(stack) ==0:
                stack.append(i)
            else:
                if i == ')' or i == ']'or i == '}':
                    if stack[-1] == para_dict[i]:
                        stack.pop()
                    else:
                        stack.append(i)
                else:
                    stack.append(i)

        if len(stack) == 0:
            return 1
        else:
            return 0

        
        