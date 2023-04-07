class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]: 
        d={}
        for i in range(len(nums)):
            ret=target-nums[i]
            if ret in d:
              return(d[ret],i)
            else:
              d[nums[i]]=i


s = Solution()
print(s.twoSum([2,7,11,15],9))

# Test cases

# [2,7,11,15]
# 9
# [3,2,4]
# 6
# [3,3]
# 6