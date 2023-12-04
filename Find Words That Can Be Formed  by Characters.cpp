/*
You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

 

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.
 

Constraints:

1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
words[i] and chars consist of lowercase English letters.
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    int countCharacters(std::vector<std::string>& words, std::string chars) {
        int result = 0;
        std::unordered_map<char, int> charCountMap;

        // Count occurrences of characters in 'chars'
        for (char c : chars) {
            charCountMap[c]++;
        }

        for (const std::string& word : words) {
            std::unordered_map<char, int> wordCharCountMap;
            bool canFormWord = true;

            // Count occurrences of characters in the current word
            for (char w : word) {
                wordCharCountMap[w]++;
            }

            // Check if the characters in 'chars' can form the current word
            for (const auto& pair : wordCharCountMap) {
                if (charCountMap[pair.first] < pair.second) {
                    canFormWord = false;
                    break;
                }
            }

            if (canFormWord) {
                result += word.length();
            }
        }

        return result;
    }
};
