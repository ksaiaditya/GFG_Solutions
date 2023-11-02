"""
Title     : Minimum distance between two numbers
Author    : Karnati Sai Aditya
Solved On : 02 Nov 2023
Solved Using : Python3
"""

import sys

class Solution:
    def minDist(self, arr, n, x, y):
        p = -1
        min_dist = sys.maxsize

        for i, val in enumerate(arr):
            if val in {x, y}:
                if p != -1 and arr[i] != arr[p]:
                    min_dist = min(min_dist, i - p)
                p = i

        return -1 if min_dist == sys.maxsize else min_dist

# Time Complexity: O(N)
# Space Complexity: O(1)