"""Q1. Concatenation of Array"""

class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        ans=[0]*2*len(nums)
        n=len(nums)
        for i in range(len(nums)):
            ans[i]=nums[i]
            ans[i+n]=nums[i]
        return ans
