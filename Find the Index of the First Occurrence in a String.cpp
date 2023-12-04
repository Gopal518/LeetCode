// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.
// Example 2:

// Input: haystack = "leetcode", needle = "leeto"
// Output: -1
// Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

// Constraints:

// 1 <= haystack.length, needle.length <= 104
// haystack and needle consist of only lowercase English characters.

class Solution {
 public:
    int strStr(string haystack, string needle) {
        int start = 0;
        int haystackCounter = 0;
        if (size(needle) == 0)
            return 0;
        if (size(needle) > size(haystack))
            return -1;
        for (int i = 0; i <= size(haystack) - size(needle); i++) {
            for (int j = 0; j <= size(needle); j++) {
                if (haystack[i + j] != needle[j])
                    break;
                if (j == size(needle) - 1)
                    return i;
            }
        }
        return -1;
    }
};