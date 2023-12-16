'''Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 

Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

Follow-up: Could you solve the problem in linear time and in O(1) space?'''
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_ = 0
        max_num = 0
        nums_dict = {}
        for i in nums:
            if nums_dict.get(i) == None:
                nums_dict[i]=0
            nums_dict[i]+=1

            if nums_dict[i]>max_:
                max_ = nums_dict[i]
                max_num = i
        return max_num
             