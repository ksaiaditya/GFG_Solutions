/*
Title     : Move all zeroes to end of array
Author    : Karnati Sai Aditya
Solved On : 31 Oct 2023
Solved Using : CPP
*/

class Solution
{
public:
    void pushZerosToEnd(int arr[], int n)
    {
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                arr[temp++] = arr[i];
            }
        }
        while (temp < n)
        {
            arr[temp++] = 0;
        }
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
