"""
Title     : Frequencies of Limited Range Array Elements
Author    : Karnati Sai Aditya
Solved On : 01 Nov 2023
Solved Using : Python3
"""

class Solution:
    def frequencyCount(self, arr, N, P):
        res = [0]*N
        for num in arr:
            if num <= min(P, N):
                res[num-1] += 1
        arr[:N] = res

# Time Complexity: O(N)
# Space Complexity: O(1)