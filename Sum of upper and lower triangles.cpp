/*
Title     : Sum of upper and lower triangles
Author    : Karnati Sai Aditya
Solved On : 07 Nov 2023
Solved Using : CPP
*/

#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                sum1 += matrix[i][j];
                sum2 += matrix[j][i];
            }
        }
        return {sum1, sum2};
    }
};

// Time Complexity: O(n^2)
// Space Complexity: O(1)