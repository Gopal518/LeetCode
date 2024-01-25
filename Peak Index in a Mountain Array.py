'''An array arr is a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i] 
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

 

Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1
 

Constraints:

3 <= arr.length <= 105
0 <= arr[i] <= 106
arr is guaranteed to be a mountain array.'''



### Time complexity O(N) and Space complexity O(1)
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        index = 0
        max_ = 0
        for i,j in enumerate(arr):
            if (max_ < j):
                index = i
                max_ = j
        return index
        
### Time complexity O(N) and Space complexity O(1) but at early exit 
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        index = -1
        max_ = -1
        for i in range(len(arr)):
            if (arr[i]>arr[i+1]):
                return i
            
### Time complexity O(log(N)) and Space complexity O(1) but at early exit 
class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        start = 0
        end = len(arr)-1

        while start <= end :
            mid = (start + end )//2
            if arr[mid] >= arr[mid-1] and arr[mid] >= arr[mid+1] :
                return mid
            elif arr[mid] > arr[mid-1]:
                start = mid
            else:
                end = mid

        
        