/*
Title     : Predict the Column
Author    : Karnati Sai Aditya
Solved On : 09 Nov 2023
Solved Using : CPP
*/

class Solution
{
public:
    int columnWithMaxZeros(vector<vector<int>> arr, int N)
    {
        int maxi = 0;
        int num = -1;
        for (int i = 0; i < N; i++)
        {
            int temp = 0;
            for (int j = 0; j < N; j++)
            {
                if (arr[j][i] == 0)
                    temp++;
            }
            if (temp > maxi)
            {
                maxi = temp;
                num = i;
                if (maxi == N)
                    break;
            }
        }
        return num;
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)