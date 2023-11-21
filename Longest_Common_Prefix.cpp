// Write a function to find the longest common prefix string amongst an array of
//     strings.

//     If there is no common prefix,
//     return an empty string "".

//            Example 1 :

//     Input : strs = [ "flower", "flow", "flight" ] Output : "fl" Example 2 :

//     Input : strs = [ "dog", "racecar", "car" ] Output : "" Explanation
//     : There is no common prefix among the input strings.

//       Constraints :

//       1 <= strs.length <= 200 0 <= strs[i].length <=
//                    200 strs[i] consists of only lowercase English letters.

class Solution {
 public:
    string longestCommonPrefix(vector<string>& strs) {
        string baseString = strs[0];
        for (int i = 1; i < size(strs); i++) {
            string result = "";
            for (int j = 0; j < min(size(strs[i]), size(baseString)); j++) {
                if (strs[i][j] != baseString[j])
                    break;
                result.push_back(baseString[j]);
            }
            baseString = result;
        }
        return baseString;
    }
};