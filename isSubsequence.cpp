/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

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
s and t consist only of lowercase English letters.*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int count = 0;
        for(char S:s){
            while(i<size(t)){
                if(S==t[i]){
                    count +=1;
                    i++;
                    break;
                }
                i++;
            }
        }
        if(count == size(s)) return true;
        return false;
    }
};