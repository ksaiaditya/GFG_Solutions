"""
Title     : Sum of Array
Author    : Karnati Sai Aditya
Solved On : 26 Oct 2023
Solved Using : Python3
"""

class Solution:
    def _sum(self, arr, n):
        sum = 0
        for i in range(n):
            sum += arr[i]
        return sum

# Time Complexity: O(N)
# Space Complexity: O(1)