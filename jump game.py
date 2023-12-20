'''You are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

 

Example 1:

Input: nums = [2,3,1,1,4]
Output: true
Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
Example 2:

Input: nums = [3,2,1,0,4]
Output: false
Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.
'''

class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        start = 0
        end = len(nums)-1
        while(start != end):
            if(nums[start]!= 0):
                start+=1
            else:
                count = 0
                while(nums[start]<= count):
                    start-=1
                    count+=1
                    if(start<0):
                        return 0
                start = start + count + 1
        return 1